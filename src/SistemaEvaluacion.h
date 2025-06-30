#pragma once
#include <string>
#include <map>
#include <vector>
#include <variant>
#include <memory>

// Enumeraciones para el sistema de evaluación

enum class TipoCargo {
    INGENIERO,
    ARQUITECTO,
    SUPERVISOR,
    OPERARIO,
    TECNICO,
    ADMINISTRATIVO
};

enum class AreaConstructora {
    ESTRUCTURAL,
    ACABADOS,
    INSTALACIONES,
    OBRA_CIVIL,
    SEGURIDAD,
    CALIDAD
};

enum class NivelRendimiento {
    ALTO,
    MEDIO,
    BAJO
};

enum class TipoCriterio {
    CUANTITATIVO,
    CUALITATIVO,
    MIXTO
};

enum class MetricaCriterio {
    PRODUCTIVIDAD,
    CALIDAD_TRABAJO,
    SEGURIDAD_LABORAL,
    CUMPLIMIENTO_PLAZOS,
    LIDERAZGO,
    TRABAJO_EQUIPO,
    CONOCIMIENTO_TECNICO,
    ADAPTABILIDAD,
    ASISTENCIA
};

enum class EscalaLikert {
    EXCELENTE,
    BUENO,
    REGULAR,
    DEFICIENTE,
    MUY_DEFICIENTE
};

// Estructuras principales del sistema

struct Empleado {
    std::string id;
    std::string nombre;
    TipoCargo cargo;
    double experienciaAnos;
    AreaConstructora area;
    NivelRendimiento rendimiento;
    std::map<MetricaCriterio, double> evaluaciones;
};

struct CriterioEvaluacion {
    std::string id;
    double peso;
    TipoCriterio tipo;
    MetricaCriterio metrica;
};

struct Grupo {
    std::string id;
    std::vector<std::string> miembros;
    std::map<MetricaCriterio, std::vector<double>> datosEvaluacion;
};

struct ResultadoFisher {
    double coeficiente;
    double significancia;
    std::vector<MetricaCriterio> variablesDiscriminantes;
    std::string interpretacion;
};

// Clase principal del sistema de evaluación
class SistemaEvaluacionFisher {
public:
    // Gestión de empleados
    void agregarEmpleado(const Empleado& empleado);
    void actualizarEmpleado(const std::string& id, const Empleado& empleado);
    Empleado* obtenerEmpleado(const std::string& id);
    
    // Gestión de criterios
    void agregarCriterio(const CriterioEvaluacion& criterio);
    CriterioEvaluacion* obtenerCriterio(const std::string& id);
    
    // Gestión de grupos
    void crearGrupo(const std::string& id, const std::vector<std::string>& miembros);
    Grupo* obtenerGrupo(const std::string& id);
    
    // Evaluaciones
    void evaluarEmpleado(const std::string& empleadoId, MetricaCriterio metrica, double valor);
    void evaluarEmpleadoLikert(const std::string& empleadoId, MetricaCriterio metrica, EscalaLikert escala);
    
    // Cálculos estadísticos
    ResultadoFisher calcularCoeficienteFisher(
        const std::string& grupoA, 
        const std::string& grupoB, 
        const std::vector<MetricaCriterio>& variables
    );
    
    double calcularMedia(const std::vector<double>& datos);
    double calcularVarianza(const std::vector<double>& datos);
    double calcularDesviacionEstandar(const std::vector<double>& datos);
    
    // Consultas y reportes
    std::vector<Empleado> obtenerRanking(MetricaCriterio metrica, int limite = -1);
    std::map<MetricaCriterio, double> obtenerEstadisticas(const std::string& grupoId = "");
    NivelRendimiento predecirRendimiento(const std::string& empleadoId);
    
    // Utilidades
    double convertirLikertANumero(EscalaLikert escala);
    std::string tipoCargoToString(TipoCargo cargo);
    std::string areaConstructoraToString(AreaConstructora area);
    std::string metricaCriterioToString(MetricaCriterio metrica);
    
    void imprimirReporteSistema();

private:
    std::map<std::string, Empleado> empleados;
    std::map<std::string, CriterioEvaluacion> criterios;
    std::map<std::string, Grupo> grupos;
    
    // Funciones auxiliares para cálculos estadísticos
    std::vector<double> obtenerDatosGrupo(const std::string& grupoId, MetricaCriterio metrica);
    double calcularFStatistic(const std::vector<double>& grupo1, const std::vector<double>& grupo2);
};
