#include "SistemaEvaluacion.h"
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <iomanip>

// ===== GESTIÓN DE EMPLEADOS =====

void SistemaEvaluacionFisher::agregarEmpleado(const Empleado& empleado) {
    empleados[empleado.id] = empleado;
    std::cout << "Empleado agregado: " << empleado.nombre << " (ID: " << empleado.id << ")" << std::endl;
}

void SistemaEvaluacionFisher::actualizarEmpleado(const std::string& id, const Empleado& empleado) {
    if (empleados.find(id) != empleados.end()) {
        empleados[id] = empleado;
        std::cout << "Empleado actualizado: " << empleado.nombre << std::endl;
    } else {
        std::cout << "Error: Empleado con ID " << id << " no encontrado" << std::endl;
    }
}

Empleado* SistemaEvaluacionFisher::obtenerEmpleado(const std::string& id) {
    auto it = empleados.find(id);
    return (it != empleados.end()) ? &it->second : nullptr;
}

// ===== GESTIÓN DE CRITERIOS =====

void SistemaEvaluacionFisher::agregarCriterio(const CriterioEvaluacion& criterio) {
    criterios[criterio.id] = criterio;
    std::cout << "Criterio agregado: " << criterio.id << " (Peso: " << criterio.peso << ")" << std::endl;
}

CriterioEvaluacion* SistemaEvaluacionFisher::obtenerCriterio(const std::string& id) {
    auto it = criterios.find(id);
    return (it != criterios.end()) ? &it->second : nullptr;
}

// ===== GESTIÓN DE GRUPOS =====

void SistemaEvaluacionFisher::crearGrupo(const std::string& id, const std::vector<std::string>& miembros) {
    Grupo grupo;
    grupo.id = id;
    grupo.miembros = miembros;
    
    // Inicializar datos de evaluación para cada métrica
    for (const auto& metrica : {MetricaCriterio::PRODUCTIVIDAD, MetricaCriterio::CALIDAD_TRABAJO,
                                MetricaCriterio::SEGURIDAD_LABORAL, MetricaCriterio::CUMPLIMIENTO_PLAZOS,
                                MetricaCriterio::LIDERAZGO, MetricaCriterio::TRABAJO_EQUIPO,
                                MetricaCriterio::CONOCIMIENTO_TECNICO, MetricaCriterio::ADAPTABILIDAD,
                                MetricaCriterio::ASISTENCIA}) {
        grupo.datosEvaluacion[metrica] = std::vector<double>();
    }
    
    grupos[id] = grupo;
    std::cout << "Grupo creado: " << id << " con " << miembros.size() << " miembros" << std::endl;
}

Grupo* SistemaEvaluacionFisher::obtenerGrupo(const std::string& id) {
    auto it = grupos.find(id);
    return (it != grupos.end()) ? &it->second : nullptr;
}

// ===== EVALUACIONES =====

void SistemaEvaluacionFisher::evaluarEmpleado(const std::string& empleadoId, MetricaCriterio metrica, double valor) {
    auto empleado = obtenerEmpleado(empleadoId);
    if (empleado) {
        empleado->evaluaciones[metrica] = valor;
        
        // Actualizar datos de grupo si el empleado pertenece a alguno
        for (auto& [grupoId, grupo] : grupos) {
            if (std::find(grupo.miembros.begin(), grupo.miembros.end(), empleadoId) != grupo.miembros.end()) {
                grupo.datosEvaluacion[metrica].push_back(valor);
            }
        }
        
        std::cout << "Evaluación registrada: " << empleado->nombre 
                  << " - " << metricaCriterioToString(metrica) 
                  << " = " << valor << std::endl;
    } else {
        std::cout << "Error: Empleado " << empleadoId << " no encontrado" << std::endl;
    }
}

void SistemaEvaluacionFisher::evaluarEmpleadoLikert(const std::string& empleadoId, MetricaCriterio metrica, EscalaLikert escala) {
    double valor = convertirLikertANumero(escala);
    evaluarEmpleado(empleadoId, metrica, valor);
}

// ===== CÁLCULOS ESTADÍSTICOS =====

ResultadoFisher SistemaEvaluacionFisher::calcularCoeficienteFisher(
    const std::string& grupoA, 
    const std::string& grupoB, 
    const std::vector<MetricaCriterio>& variables) {
    
    ResultadoFisher resultado;
    resultado.coeficiente = 0.0;
    resultado.significancia = 0.0;
    resultado.variablesDiscriminantes = variables;
    
    auto pGrupoA = obtenerGrupo(grupoA);
    auto pGrupoB = obtenerGrupo(grupoB);
    
    if (!pGrupoA || !pGrupoB) {
        resultado.interpretacion = "Error: Uno o ambos grupos no encontrados";
        return resultado;
    }
    
    std::cout << "\n=== CÁLCULO DEL COEFICIENTE DE FISHER ===" << std::endl;
    std::cout << "Comparando grupos: " << grupoA << " vs " << grupoB << std::endl;
    std::cout << "Variables analizadas: ";
    for (const auto& var : variables) {
        std::cout << metricaCriterioToString(var) << " ";
    }
    std::cout << std::endl;
    
    double sumaF = 0.0;
    int variablesValidas = 0;
    
    for (const auto& variable : variables) {
        std::vector<double> datosA = obtenerDatosGrupo(grupoA, variable);
        std::vector<double> datosB = obtenerDatosGrupo(grupoB, variable);
        
        if (!datosA.empty() && !datosB.empty()) {
            double fStat = calcularFStatistic(datosA, datosB);
            sumaF += fStat;
            variablesValidas++;
            
            std::cout << "  " << metricaCriterioToString(variable) 
                      << ": F = " << std::fixed << std::setprecision(3) << fStat << std::endl;
        }
    }
    
    if (variablesValidas > 0) {
        resultado.coeficiente = sumaF / variablesValidas;
        
        // Determinar significancia aproximada
        if (resultado.coeficiente > 4.0) {
            resultado.significancia = 0.01; // Muy significativo
            resultado.interpretacion = "Diferencia muy significativa entre grupos (p < 0.01)";
        } else if (resultado.coeficiente > 2.5) {
            resultado.significancia = 0.05; // Significativo
            resultado.interpretacion = "Diferencia significativa entre grupos (p < 0.05)";
        } else if (resultado.coeficiente > 1.5) {
            resultado.significancia = 0.10; // Marginalmente significativo
            resultado.interpretacion = "Diferencia marginalmente significativa (p < 0.10)";
        } else {
            resultado.significancia = 0.20; // No significativo
            resultado.interpretacion = "No hay diferencia significativa entre grupos";
        }
        
        std::cout << "\nResultado Fisher: " << std::fixed << std::setprecision(4) 
                  << resultado.coeficiente << std::endl;
        std::cout << "Interpretación: " << resultado.interpretacion << std::endl;
    } else {
        resultado.interpretacion = "Error: No hay datos suficientes para el cálculo";
    }
    
    return resultado;
}

double SistemaEvaluacionFisher::calcularMedia(const std::vector<double>& datos) {
    if (datos.empty()) return 0.0;
    return std::accumulate(datos.begin(), datos.end(), 0.0) / datos.size();
}

double SistemaEvaluacionFisher::calcularVarianza(const std::vector<double>& datos) {
    if (datos.size() <= 1) return 0.0;
    
    double media = calcularMedia(datos);
    double suma = 0.0;
    
    for (double valor : datos) {
        suma += (valor - media) * (valor - media);
    }
    
    return suma / (datos.size() - 1);
}

double SistemaEvaluacionFisher::calcularDesviacionEstandar(const std::vector<double>& datos) {
    return std::sqrt(calcularVarianza(datos));
}

// ===== CONSULTAS Y REPORTES =====

std::vector<Empleado> SistemaEvaluacionFisher::obtenerRanking(MetricaCriterio metrica, int limite) {
    std::vector<Empleado> ranking;
    
    for (const auto& [id, empleado] : empleados) {
        auto it = empleado.evaluaciones.find(metrica);
        if (it != empleado.evaluaciones.end()) {
            ranking.push_back(empleado);
        }
    }
    
    // Ordenar por la métrica especificada (descendente)
    std::sort(ranking.begin(), ranking.end(), [metrica](const Empleado& a, const Empleado& b) {
        auto itA = a.evaluaciones.find(metrica);
        auto itB = b.evaluaciones.find(metrica);
        if (itA != a.evaluaciones.end() && itB != b.evaluaciones.end()) {
            return itA->second > itB->second;
        }
        return false;
    });
    
    if (limite > 0 && static_cast<size_t>(limite) < ranking.size()) {
        ranking.resize(limite);
    }
    
    std::cout << "\n=== RANKING - " << metricaCriterioToString(metrica) << " ===" << std::endl;
    for (size_t i = 0; i < ranking.size(); ++i) {
        auto it = ranking[i].evaluaciones.find(metrica);
        std::cout << (i+1) << ". " << ranking[i].nombre 
                  << " (" << tipoCargoToString(ranking[i].cargo) << ")"
                  << " - Puntuación: " << std::fixed << std::setprecision(2) 
                  << it->second << std::endl;
    }
    
    return ranking;
}

std::map<MetricaCriterio, double> SistemaEvaluacionFisher::obtenerEstadisticas(const std::string& grupoId) {
    std::map<MetricaCriterio, double> estadisticas;
    
    if (grupoId.empty()) {
        // Estadísticas generales de todos los empleados
        std::cout << "\n=== ESTADÍSTICAS GENERALES ===" << std::endl;
        
        for (const auto& metrica : {MetricaCriterio::PRODUCTIVIDAD, MetricaCriterio::CALIDAD_TRABAJO,
                                    MetricaCriterio::SEGURIDAD_LABORAL, MetricaCriterio::CUMPLIMIENTO_PLAZOS,
                                    MetricaCriterio::LIDERAZGO, MetricaCriterio::TRABAJO_EQUIPO,
                                    MetricaCriterio::CONOCIMIENTO_TECNICO, MetricaCriterio::ADAPTABILIDAD,
                                    MetricaCriterio::ASISTENCIA}) {
            
            std::vector<double> valores;
            for (const auto& [id, empleado] : empleados) {
                auto it = empleado.evaluaciones.find(metrica);
                if (it != empleado.evaluaciones.end()) {
                    valores.push_back(it->second);
                }
            }
            
            if (!valores.empty()) {
                double media = calcularMedia(valores);
                estadisticas[metrica] = media;
                
                std::cout << metricaCriterioToString(metrica) << ": "
                          << "Media = " << std::fixed << std::setprecision(2) << media
                          << ", Desv. Std = " << calcularDesviacionEstandar(valores)
                          << " (n=" << valores.size() << ")" << std::endl;
            }
        }
    } else {
        // Estadísticas de un grupo específico
        auto grupo = obtenerGrupo(grupoId);
        if (grupo) {
            std::cout << "\n=== ESTADÍSTICAS DEL GRUPO: " << grupoId << " ===" << std::endl;
            
            for (const auto& [metrica, valores] : grupo->datosEvaluacion) {
                if (!valores.empty()) {
                    double media = calcularMedia(valores);
                    estadisticas[metrica] = media;
                    
                    std::cout << metricaCriterioToString(metrica) << ": "
                              << "Media = " << std::fixed << std::setprecision(2) << media
                              << ", Desv. Std = " << calcularDesviacionEstandar(valores)
                              << " (n=" << valores.size() << ")" << std::endl;
                }
            }
        }
    }
    
    return estadisticas;
}

NivelRendimiento SistemaEvaluacionFisher::predecirRendimiento(const std::string& empleadoId) {
    auto empleado = obtenerEmpleado(empleadoId);
    if (!empleado) {
        std::cout << "Error: Empleado no encontrado" << std::endl;
        return NivelRendimiento::MEDIO;
    }
    
    // Calcular puntuación promedio basada en evaluaciones
    double sumaTotal = 0.0;
    int numEvaluaciones = 0;
    
    for (const auto& [metrica, valor] : empleado->evaluaciones) {
        sumaTotal += valor;
        numEvaluaciones++;
    }
    
    if (numEvaluaciones == 0) {
        std::cout << "Predicción para " << empleado->nombre << ": Sin datos suficientes, asumiendo MEDIO" << std::endl;
        return NivelRendimiento::MEDIO;
    }
    
    double promedio = sumaTotal / numEvaluaciones;
    
    NivelRendimiento prediccion;
    if (promedio >= 4.0) {
        prediccion = NivelRendimiento::ALTO;
    } else if (promedio >= 2.5) {
        prediccion = NivelRendimiento::MEDIO;
    } else {
        prediccion = NivelRendimiento::BAJO;
    }
    
    std::cout << "Predicción de rendimiento para " << empleado->nombre 
              << ": " << (prediccion == NivelRendimiento::ALTO ? "ALTO" :
                         prediccion == NivelRendimiento::MEDIO ? "MEDIO" : "BAJO")
              << " (Promedio: " << std::fixed << std::setprecision(2) << promedio << ")" << std::endl;
    
    return prediccion;
}

// ===== FUNCIONES AUXILIARES =====

double SistemaEvaluacionFisher::convertirLikertANumero(EscalaLikert escala) {
    switch (escala) {
        case EscalaLikert::EXCELENTE: return 5.0;
        case EscalaLikert::BUENO: return 4.0;
        case EscalaLikert::REGULAR: return 3.0;
        case EscalaLikert::DEFICIENTE: return 2.0;
        case EscalaLikert::MUY_DEFICIENTE: return 1.0;
        default: return 3.0;
    }
}

std::string SistemaEvaluacionFisher::tipoCargoToString(TipoCargo cargo) {
    switch (cargo) {
        case TipoCargo::INGENIERO: return "Ingeniero";
        case TipoCargo::ARQUITECTO: return "Arquitecto";
        case TipoCargo::SUPERVISOR: return "Supervisor";
        case TipoCargo::OPERARIO: return "Operario";
        case TipoCargo::TECNICO: return "Técnico";
        case TipoCargo::ADMINISTRATIVO: return "Administrativo";
        default: return "Desconocido";
    }
}

std::string SistemaEvaluacionFisher::areaConstructoraToString(AreaConstructora area) {
    switch (area) {
        case AreaConstructora::ESTRUCTURAL: return "Estructural";
        case AreaConstructora::ACABADOS: return "Acabados";
        case AreaConstructora::INSTALACIONES: return "Instalaciones";
        case AreaConstructora::OBRA_CIVIL: return "Obra Civil";
        case AreaConstructora::SEGURIDAD: return "Seguridad";
        case AreaConstructora::CALIDAD: return "Calidad";
        default: return "Desconocido";
    }
}

std::string SistemaEvaluacionFisher::metricaCriterioToString(MetricaCriterio metrica) {
    switch (metrica) {
        case MetricaCriterio::PRODUCTIVIDAD: return "Productividad";
        case MetricaCriterio::CALIDAD_TRABAJO: return "Calidad del Trabajo";
        case MetricaCriterio::SEGURIDAD_LABORAL: return "Seguridad Laboral";
        case MetricaCriterio::CUMPLIMIENTO_PLAZOS: return "Cumplimiento de Plazos";
        case MetricaCriterio::LIDERAZGO: return "Liderazgo";
        case MetricaCriterio::TRABAJO_EQUIPO: return "Trabajo en Equipo";
        case MetricaCriterio::CONOCIMIENTO_TECNICO: return "Conocimiento Técnico";
        case MetricaCriterio::ADAPTABILIDAD: return "Adaptabilidad";
        case MetricaCriterio::ASISTENCIA: return "Asistencia";
        default: return "Desconocido";
    }
}

std::vector<double> SistemaEvaluacionFisher::obtenerDatosGrupo(const std::string& grupoId, MetricaCriterio metrica) {
    std::vector<double> datos;
    auto grupo = obtenerGrupo(grupoId);
    
    if (grupo) {
        for (const std::string& miembroId : grupo->miembros) {
            auto empleado = obtenerEmpleado(miembroId);
            if (empleado) {
                auto it = empleado->evaluaciones.find(metrica);
                if (it != empleado->evaluaciones.end()) {
                    datos.push_back(it->second);
                }
            }
        }
    }
    
    return datos;
}

double SistemaEvaluacionFisher::calcularFStatistic(const std::vector<double>& grupo1, const std::vector<double>& grupo2) {
    if (grupo1.size() <= 1 || grupo2.size() <= 1) return 0.0;
    
    double var1 = calcularVarianza(grupo1);
    double var2 = calcularVarianza(grupo2);
    
    if (var2 == 0.0) return 0.0;
    
    // F-statistic = varianza mayor / varianza menor
    return std::max(var1, var2) / std::min(var1, var2);
}

void SistemaEvaluacionFisher::imprimirReporteSistema() {
    std::cout << "\n" << std::string(60, '=') << std::endl;
    std::cout << "        REPORTE DEL SISTEMA DE EVALUACIÓN FISHER" << std::endl;
    std::cout << std::string(60, '=') << std::endl;
    
    std::cout << "\nEmpleados registrados: " << empleados.size() << std::endl;
    for (const auto& [id, empleado] : empleados) {
        std::cout << "  - " << empleado.nombre << " (" << id << ") - " 
                  << tipoCargoToString(empleado.cargo) << " - " 
                  << areaConstructoraToString(empleado.area) << std::endl;
    }
    
    std::cout << "\nCriterios definidos: " << criterios.size() << std::endl;
    for (const auto& [id, criterio] : criterios) {
        std::cout << "  - " << id << " (Peso: " << criterio.peso << ")" << std::endl;
    }
    
    std::cout << "\nGrupos creados: " << grupos.size() << std::endl;
    for (const auto& [id, grupo] : grupos) {
        std::cout << "  - " << id << " (" << grupo.miembros.size() << " miembros)" << std::endl;
    }
    
    std::cout << std::string(60, '=') << std::endl;
}
