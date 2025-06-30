#include "EvalVisitor.h"
#include "EvaluacionFisherParser.h"
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

EvaluacionVisitor::EvaluacionVisitor() {
    // Constructor vacío
}

// ===== MÉTODO PRINCIPAL =====

antlrcpp::Any EvaluacionVisitor::visitSistema(EvaluacionFisherParser::SistemaContext *ctx) {
    std::cout << "=== INICIANDO SISTEMA DE EVALUACIÓN FISHER ===" << std::endl;
    
    // Procesar todas las declaraciones, evaluaciones y consultas
    for (auto child : ctx->children) {
        if (child != ctx->EOF()) {  // Ignorar EOF
            visit(child);
        }
    }
    
    return nullptr;
}

// ===== DECLARACIONES =====

antlrcpp::Any EvaluacionVisitor::visitDeclaracionEmpleado(EvaluacionFisherParser::DeclaracionEmpleadoContext *ctx) {
    std::string id = ctx->IDENTIFICADOR()->getText();
    
    Empleado empleado;
    empleado.id = id;
    empleado.cargo = TipoCargo::OPERARIO; // Valor por defecto
    empleado.experienciaAnos = 0.0;
    empleado.area = AreaConstructora::OBRA_CIVIL; // Valor por defecto
    empleado.rendimiento = NivelRendimiento::MEDIO; // Valor por defecto
    
    std::cout << "Creando empleado: " << id << std::endl;
    
    // Procesar atributos del empleado
    for (auto atributo : ctx->atributoEmpleado()) {
        if (atributo->NOMBRE()) {
            std::string nombre = atributo->CADENA()->getText();
            // Remover comillas
            if (nombre.size() >= 2 && nombre[0] == '"' && nombre.back() == '"') {
                nombre = nombre.substr(1, nombre.size() - 2);
            }
            empleado.nombre = nombre;
            std::cout << "  - Nombre: " << nombre << std::endl;
            
        } else if (atributo->CARGO()) {
            empleado.cargo = stringATipoCargo(atributo->tipoCargo()->getText());
            std::cout << "  - Cargo: " << sistema.tipoCargoToString(empleado.cargo) << std::endl;
            
        } else if (atributo->EXPERIENCIA()) {
            empleado.experienciaAnos = std::stod(atributo->NUMERO()->getText());
            std::cout << "  - Experiencia: " << empleado.experienciaAnos << " años" << std::endl;
            
        } else if (atributo->AREA()) {
            empleado.area = stringAAreaConstructora(atributo->areaConstructora()->getText());
            std::cout << "  - Área: " << sistema.areaConstructoraToString(empleado.area) << std::endl;
            
        } else if (atributo->RENDIMIENTO()) {
            empleado.rendimiento = stringANivelRendimiento(atributo->nivelRendimiento()->getText());
            std::cout << "  - Rendimiento: " << (empleado.rendimiento == NivelRendimiento::ALTO ? "ALTO" :
                                                 empleado.rendimiento == NivelRendimiento::MEDIO ? "MEDIO" : "BAJO") << std::endl;
        }
    }
    
    sistema.agregarEmpleado(empleado);
    return nullptr;
}

antlrcpp::Any EvaluacionVisitor::visitDeclaracionCriterio(EvaluacionFisherParser::DeclaracionCriterioContext *ctx) {
    std::string id = ctx->IDENTIFICADOR()->getText();
    
    CriterioEvaluacion criterio;
    criterio.id = id;
    criterio.peso = 1.0; // Valor por defecto
    criterio.tipo = TipoCriterio::CUANTITATIVO; // Valor por defecto
    criterio.metrica = MetricaCriterio::PRODUCTIVIDAD; // Valor por defecto
    
    std::cout << "Creando criterio: " << id << std::endl;
    
    // Procesar atributos del criterio (PESO, TIPO, METRICA)
    // Por simplicidad, asumimos que se especifica al menos el peso
    // En una implementación completa, procesaríamos todos los atributos
    
    sistema.agregarCriterio(criterio);
    return nullptr;
}

antlrcpp::Any EvaluacionVisitor::visitDeclaracionGrupo(EvaluacionFisherParser::DeclaracionGrupoContext *ctx) {
    std::string id = ctx->IDENTIFICADOR()->getText();
    
    std::vector<std::string> miembros;
    if (ctx->listaEmpleados()) {
        for (auto identificador : ctx->listaEmpleados()->IDENTIFICADOR()) {
            miembros.push_back(identificador->getText());
        }
    }
    
    std::cout << "Creando grupo: " << id << " con miembros: ";
    for (const auto& miembro : miembros) {
        std::cout << miembro << " ";
    }
    std::cout << std::endl;
    
    sistema.crearGrupo(id, miembros);
    return nullptr;
}

antlrcpp::Any EvaluacionVisitor::visitAtributoEmpleado(EvaluacionFisherParser::AtributoEmpleadoContext *ctx) {
    // Este método se llama desde visitDeclaracionEmpleado, no necesita implementación independiente
    return nullptr;
}

// ===== EVALUACIONES =====

antlrcpp::Any EvaluacionVisitor::visitCalculoFisher(EvaluacionFisherParser::CalculoFisherContext *ctx) {
    std::string grupoA, grupoB;
    std::vector<MetricaCriterio> variables;
    
    // Extraer los grupos A y B (simplificado)
    // En una implementación completa, analizaríamos la estructura completa
    std::cout << "Calculando coeficiente de Fisher..." << std::endl;
    
    // Por ahora, usamos grupos predeterminados para demostración
    grupoA = "grupo1";
    grupoB = "grupo2";
    variables = {MetricaCriterio::PRODUCTIVIDAD, MetricaCriterio::CALIDAD_TRABAJO};
    
    ResultadoFisher resultado = sistema.calcularCoeficienteFisher(grupoA, grupoB, variables);
    
    std::cout << "Resultado del cálculo Fisher: " << resultado.coeficiente << std::endl;
    std::cout << "Interpretación: " << resultado.interpretacion << std::endl;
    
    return nullptr;
}

antlrcpp::Any EvaluacionVisitor::visitEvaluacionIndividual(EvaluacionFisherParser::EvaluacionIndividualContext *ctx) {
    std::string empleadoId = ctx->IDENTIFICADOR()->getText();
    
    std::cout << "Evaluando empleado: " << empleadoId << std::endl;
    
    // Procesar criterios de valoración
    for (auto criterio : ctx->criterioValoracion()) {
        MetricaCriterio metrica = MetricaCriterio::PRODUCTIVIDAD; // Por defecto
        double valor = 3.0; // Valor por defecto
        
        if (criterio->valoracion()->NUMERO()) {
            valor = std::stod(criterio->valoracion()->NUMERO()->getText());
        } else if (criterio->valoracion()->ESCALA_LIKERT()) {
            EscalaLikert escala = stringAEscalaLikert(criterio->valoracion()->ESCALA_LIKERT()->getText());
            sistema.evaluarEmpleadoLikert(empleadoId, metrica, escala);
            continue;
        }
        
        sistema.evaluarEmpleado(empleadoId, metrica, valor);
    }
    
    return nullptr;
}

antlrcpp::Any EvaluacionVisitor::visitComparacionGrupos(EvaluacionFisherParser::ComparacionGruposContext *ctx) {
    std::cout << "Comparando grupos..." << std::endl;
    
    // Extraer los IDs de los grupos y las variables (simplificado)
    std::vector<MetricaCriterio> variables = {MetricaCriterio::PRODUCTIVIDAD};
    
    std::cout << "Comparación completada." << std::endl;
    return nullptr;
}

// ===== CONSULTAS =====

antlrcpp::Any EvaluacionVisitor::visitConsultaEmpleado(EvaluacionFisherParser::ConsultaEmpleadoContext *ctx) {
    std::string empleadoId = ctx->IDENTIFICADOR()->getText();
    
    auto empleado = sistema.obtenerEmpleado(empleadoId);
    if (empleado) {
        std::cout << "\n=== INFORMACIÓN DEL EMPLEADO ===" << std::endl;
        std::cout << "ID: " << empleado->id << std::endl;
        std::cout << "Nombre: " << empleado->nombre << std::endl;
        std::cout << "Cargo: " << sistema.tipoCargoToString(empleado->cargo) << std::endl;
        std::cout << "Área: " << sistema.areaConstructoraToString(empleado->area) << std::endl;
        std::cout << "Experiencia: " << empleado->experienciaAnos << " años" << std::endl;
        
        if (!empleado->evaluaciones.empty()) {
            std::cout << "Evaluaciones:" << std::endl;
            for (const auto& [metrica, valor] : empleado->evaluaciones) {
                std::cout << "  - " << sistema.metricaCriterioToString(metrica) 
                          << ": " << valor << std::endl;
            }
        }
    } else {
        std::cout << "Empleado no encontrado: " << empleadoId << std::endl;
    }
    
    return nullptr;
}

antlrcpp::Any EvaluacionVisitor::visitConsultaRanking(EvaluacionFisherParser::ConsultaRankingContext *ctx) {
    MetricaCriterio metrica = MetricaCriterio::PRODUCTIVIDAD; // Por defecto
    int limite = -1; // Sin límite por defecto
    
    if (ctx->LIMITE()) {
        limite = std::stoi(ctx->NUMERO()->getText());
    }
    
    sistema.obtenerRanking(metrica, limite);
    return nullptr;
}

antlrcpp::Any EvaluacionVisitor::visitConsultaEstadisticas(EvaluacionFisherParser::ConsultaEstadisticasContext *ctx) {
    std::string grupoId = "";
    
    if (ctx->IDENTIFICADOR()) {
        grupoId = ctx->IDENTIFICADOR()->getText();
    }
    
    sistema.obtenerEstadisticas(grupoId);
    return nullptr;
}

antlrcpp::Any EvaluacionVisitor::visitConsultaPrediccion(EvaluacionFisherParser::ConsultaPrediccionContext *ctx) {
    std::string empleadoId = ctx->IDENTIFICADOR()->getText();
    
    sistema.predecirRendimiento(empleadoId);
    return nullptr;
}

// ===== FUNCIONES AUXILIARES DE CONVERSIÓN =====

TipoCargo EvaluacionVisitor::stringATipoCargo(const std::string& cargo) {
    std::string cargoUpper = cargo;
    std::transform(cargoUpper.begin(), cargoUpper.end(), cargoUpper.begin(), ::toupper);
    
    if (cargoUpper == "INGENIERO") return TipoCargo::INGENIERO;
    if (cargoUpper == "ARQUITECTO") return TipoCargo::ARQUITECTO;
    if (cargoUpper == "SUPERVISOR") return TipoCargo::SUPERVISOR;
    if (cargoUpper == "OPERARIO") return TipoCargo::OPERARIO;
    if (cargoUpper == "TECNICO") return TipoCargo::TECNICO;
    if (cargoUpper == "ADMINISTRATIVO") return TipoCargo::ADMINISTRATIVO;
    
    return TipoCargo::OPERARIO; // Por defecto
}

AreaConstructora EvaluacionVisitor::stringAAreaConstructora(const std::string& area) {
    std::string areaUpper = area;
    std::transform(areaUpper.begin(), areaUpper.end(), areaUpper.begin(), ::toupper);
    
    if (areaUpper == "ESTRUCTURAL") return AreaConstructora::ESTRUCTURAL;
    if (areaUpper == "ACABADOS") return AreaConstructora::ACABADOS;
    if (areaUpper == "INSTALACIONES") return AreaConstructora::INSTALACIONES;
    if (areaUpper == "OBRA_CIVIL") return AreaConstructora::OBRA_CIVIL;
    if (areaUpper == "SEGURIDAD") return AreaConstructora::SEGURIDAD;
    if (areaUpper == "CALIDAD") return AreaConstructora::CALIDAD;
    
    return AreaConstructora::OBRA_CIVIL; // Por defecto
}

NivelRendimiento EvaluacionVisitor::stringANivelRendimiento(const std::string& nivel) {
    std::string nivelUpper = nivel;
    std::transform(nivelUpper.begin(), nivelUpper.end(), nivelUpper.begin(), ::toupper);
    
    if (nivelUpper == "ALTO") return NivelRendimiento::ALTO;
    if (nivelUpper == "MEDIO") return NivelRendimiento::MEDIO;
    if (nivelUpper == "BAJO") return NivelRendimiento::BAJO;
    
    return NivelRendimiento::MEDIO; // Por defecto
}

TipoCriterio EvaluacionVisitor::stringATipoCriterio(const std::string& tipo) {
    std::string tipoUpper = tipo;
    std::transform(tipoUpper.begin(), tipoUpper.end(), tipoUpper.begin(), ::toupper);
    
    if (tipoUpper == "CUANTITATIVO") return TipoCriterio::CUANTITATIVO;
    if (tipoUpper == "CUALITATIVO") return TipoCriterio::CUALITATIVO;
    if (tipoUpper == "MIXTO") return TipoCriterio::MIXTO;
    
    return TipoCriterio::CUANTITATIVO; // Por defecto
}

MetricaCriterio EvaluacionVisitor::stringAMetricaCriterio(const std::string& metrica) {
    std::string metricaUpper = metrica;
    std::transform(metricaUpper.begin(), metricaUpper.end(), metricaUpper.begin(), ::toupper);
    
    if (metricaUpper == "PRODUCTIVIDAD") return MetricaCriterio::PRODUCTIVIDAD;
    if (metricaUpper == "CALIDAD_TRABAJO") return MetricaCriterio::CALIDAD_TRABAJO;
    if (metricaUpper == "SEGURIDAD_LABORAL") return MetricaCriterio::SEGURIDAD_LABORAL;
    if (metricaUpper == "CUMPLIMIENTO_PLAZOS") return MetricaCriterio::CUMPLIMIENTO_PLAZOS;
    if (metricaUpper == "LIDERAZGO") return MetricaCriterio::LIDERAZGO;
    if (metricaUpper == "TRABAJO_EQUIPO") return MetricaCriterio::TRABAJO_EQUIPO;
    if (metricaUpper == "CONOCIMIENTO_TECNICO") return MetricaCriterio::CONOCIMIENTO_TECNICO;
    if (metricaUpper == "ADAPTABILIDAD") return MetricaCriterio::ADAPTABILIDAD;
    if (metricaUpper == "ASISTENCIA") return MetricaCriterio::ASISTENCIA;
    
    return MetricaCriterio::PRODUCTIVIDAD; // Por defecto
}

EscalaLikert EvaluacionVisitor::stringAEscalaLikert(const std::string& escala) {
    std::string escalaUpper = escala;
    std::transform(escalaUpper.begin(), escalaUpper.end(), escalaUpper.begin(), ::toupper);
    
    if (escalaUpper == "EXCELENTE") return EscalaLikert::EXCELENTE;
    if (escalaUpper == "BUENO") return EscalaLikert::BUENO;
    if (escalaUpper == "REGULAR") return EscalaLikert::REGULAR;
    if (escalaUpper == "DEFICIENTE") return EscalaLikert::DEFICIENTE;
    if (escalaUpper == "MUY_DEFICIENTE") return EscalaLikert::MUY_DEFICIENTE;
    
    return EscalaLikert::REGULAR; // Por defecto
}

void EvaluacionVisitor::imprimirReporte() {
    sistema.imprimirReporteSistema();
}