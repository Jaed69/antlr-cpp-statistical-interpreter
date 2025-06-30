grammar EvaluacionFisher;

// Regla principal del sistema
sistema: (declaracion | evaluacion | consulta)+ EOF;

// Declaraciones de empleados y criterios
declaracion: declaracionEmpleado | declaracionCriterio | declaracionGrupo;

// Declaración de empleado
declaracionEmpleado: 
    EMPLEADO IDENTIFICADOR LBRACE
        atributoEmpleado+
    RBRACE;

atributoEmpleado: 
    NOMBRE DOSPUNTOS CADENA
    | CARGO DOSPUNTOS tipoCargo
    | EXPERIENCIA DOSPUNTOS NUMERO ANOS
    | AREA DOSPUNTOS areaConstructora
    | RENDIMIENTO DOSPUNTOS nivelRendimiento;

// Tipos de cargos en construcción
tipoCargo: INGENIERO | ARQUITECTO | SUPERVISOR | OPERARIO | TECNICO | ADMINISTRATIVO;

// Áreas de construcción
areaConstructora: ESTRUCTURAL | ACABADOS | INSTALACIONES | OBRA_CIVIL | SEGURIDAD | CALIDAD;

// Niveles de rendimiento
nivelRendimiento: ALTO | MEDIO | BAJO;

// Declaración de criterios de evaluación
declaracionCriterio:
    CRITERIO IDENTIFICADOR LBRACE
        (PESO DOSPUNTOS NUMERO |
        TIPO DOSPUNTOS tipoCriterio |
        METRICA DOSPUNTOS metricaCriterio)+
    RBRACE;

// Tipos de criterios
tipoCriterio: CUANTITATIVO | CUALITATIVO | MIXTO;

// Métricas específicas para construcción
metricaCriterio: 
    PRODUCTIVIDAD | CALIDAD_TRABAJO | SEGURIDAD_LABORAL | 
    CUMPLIMIENTO_PLAZOS | LIDERAZGO | TRABAJO_EQUIPO |
    CONOCIMIENTO_TECNICO | ADAPTABILIDAD | ASISTENCIA;

// Declaración de grupos para análisis discriminante
declaracionGrupo:
    GRUPO IDENTIFICADOR LBRACE
        MIEMBROS DOSPUNTOS listaEmpleados
    RBRACE;

listaEmpleados: IDENTIFICADOR (COMA IDENTIFICADOR)*;

// Evaluaciones y cálculos del coeficiente de Fisher
evaluacion: 
    calculoFisher | 
    evaluacionIndividual | 
    comparacionGrupos;

// Cálculo del coeficiente de Fisher
calculoFisher:
    FISHER LPAREN
        GRUPO_A DOSPUNTOS IDENTIFICADOR COMA
        GRUPO_B DOSPUNTOS IDENTIFICADOR COMA
        VARIABLES DOSPUNTOS listaVariables
    RPAREN;

listaVariables: variable (COMA variable)*;

// Variables de evaluación
variable: 
    PRODUCTIVIDAD | CALIDAD_TRABAJO | SEGURIDAD_LABORAL |
    CUMPLIMIENTO_PLAZOS | LIDERAZGO | TRABAJO_EQUIPO |
    CONOCIMIENTO_TECNICO | ADAPTABILIDAD | ASISTENCIA |
    IDENTIFICADOR;

// Evaluación individual
evaluacionIndividual:
    EVALUAR IDENTIFICADOR LBRACE
        (criterioValoracion)+
    RBRACE;

criterioValoracion:
    variable DOSPUNTOS valoracion;

valoracion: NUMERO | ESCALA_LIKERT;

ESCALA_LIKERT: 'EXCELENTE' | 'BUENO' | 'REGULAR' | 'DEFICIENTE' | 'MUY_DEFICIENTE';

// Comparación entre grupos
comparacionGrupos:
    COMPARAR GRUPO IDENTIFICADOR CON GRUPO IDENTIFICADOR
    USANDO listaVariables;

// Consultas y reportes
consulta: 
    consultaEmpleado | 
    consultaRanking | 
    consultaEstadisticas |
    consultaPrediccion;

consultaEmpleado:
    CONSULTAR EMPLEADO IDENTIFICADOR;

consultaRanking:
    RANKING (POR variable)? (LIMITE NUMERO)?;

consultaEstadisticas:
    ESTADISTICAS (DE variable)? (PARA GRUPO IDENTIFICADOR)?;

consultaPrediccion:
    PREDECIR RENDIMIENTO DE IDENTIFICADOR;

// TOKENS LÉXICOS

// Palabras clave del sistema
EMPLEADO: 'empleado' | 'EMPLEADO';
CRITERIO: 'criterio' | 'CRITERIO';
GRUPO: 'grupo' | 'GRUPO';
FISHER: 'fisher' | 'FISHER' | 'coeficienteFisher';
EVALUAR: 'evaluar' | 'EVALUAR';
COMPARAR: 'comparar' | 'COMPARAR';
CONSULTAR: 'consultar' | 'CONSULTAR';
RANKING: 'ranking' | 'RANKING';
ESTADISTICAS: 'estadisticas' | 'ESTADISTICAS';
PREDECIR: 'predecir' | 'PREDECIR';

// Atributos de empleado
NOMBRE: 'nombre' | 'NOMBRE';
CARGO: 'cargo' | 'CARGO';
EXPERIENCIA: 'experiencia' | 'EXPERIENCIA';
AREA: 'area' | 'AREA';
RENDIMIENTO: 'rendimiento' | 'RENDIMIENTO';

// Tipos de cargo
INGENIERO: 'ingeniero' | 'INGENIERO';
ARQUITECTO: 'arquitecto' | 'ARQUITECTO';
SUPERVISOR: 'supervisor' | 'SUPERVISOR';
OPERARIO: 'operario' | 'OPERARIO';
TECNICO: 'tecnico' | 'TECNICO';
ADMINISTRATIVO: 'administrativo' | 'ADMINISTRATIVO';

// Áreas de construcción
ESTRUCTURAL: 'estructural' | 'ESTRUCTURAL';
ACABADOS: 'acabados' | 'ACABADOS';
INSTALACIONES: 'instalaciones' | 'INSTALACIONES';
OBRA_CIVIL: 'obra_civil' | 'OBRA_CIVIL';
SEGURIDAD: 'seguridad' | 'SEGURIDAD';
CALIDAD: 'calidad' | 'CALIDAD';

// Niveles de rendimiento
ALTO: 'alto' | 'ALTO';
MEDIO: 'medio' | 'MEDIO';
BAJO: 'bajo' | 'BAJO';

// Atributos de criterio
PESO: 'peso' | 'PESO';
TIPO: 'tipo' | 'TIPO';
METRICA: 'metrica' | 'METRICA';

// Tipos de criterio
CUANTITATIVO: 'cuantitativo' | 'CUANTITATIVO';
CUALITATIVO: 'cualitativo' | 'CUALITATIVO';
MIXTO: 'mixto' | 'MIXTO';

// Métricas de evaluación
PRODUCTIVIDAD: 'productividad' | 'PRODUCTIVIDAD';
CALIDAD_TRABAJO: 'calidad_trabajo' | 'CALIDAD_TRABAJO';
SEGURIDAD_LABORAL: 'seguridad_laboral' | 'SEGURIDAD_LABORAL';
CUMPLIMIENTO_PLAZOS: 'cumplimiento_plazos' | 'CUMPLIMIENTO_PLAZOS';
LIDERAZGO: 'liderazgo' | 'LIDERAZGO';
TRABAJO_EQUIPO: 'trabajo_equipo' | 'TRABAJO_EQUIPO';
CONOCIMIENTO_TECNICO: 'conocimiento_tecnico' | 'CONOCIMIENTO_TECNICO';
ADAPTABILIDAD: 'adaptabilidad' | 'ADAPTABILIDAD';
ASISTENCIA: 'asistencia' | 'ASISTENCIA';

// Palabras clave adicionales
MIEMBROS: 'miembros' | 'MIEMBROS';
GRUPO_A: 'grupo_a' | 'GRUPO_A';
GRUPO_B: 'grupo_b' | 'GRUPO_B';
VARIABLES: 'variables' | 'VARIABLES';
USANDO: 'usando' | 'USANDO';
CON: 'con' | 'CON';
DE: 'de' | 'DE';
POR: 'por' | 'POR';
PARA: 'para' | 'PARA';
LIMITE: 'limite' | 'LIMITE';
ANOS: 'años' | 'AÑOS' | 'anos' | 'ANOS' | 'anios' | 'ANIOS';

// Símbolos
LBRACE: '{';
RBRACE: '}';
LPAREN: '(';
RPAREN: ')';
DOSPUNTOS: ':';
COMA: ',';

// Tipos de datos
NUMERO: [0-9]+ ('.' [0-9]+)?;
CADENA: '"' (~["\r\n])* '"' | '\'' (~['\r\n])* '\'';
IDENTIFICADOR: [a-zA-Z_][a-zA-Z0-9_]*;

// Espacios en blanco y comentarios
WS: [ \t\r\n]+ -> skip;
COMENTARIO_LINEA: '//' ~[\r\n]* -> skip;
COMENTARIO_BLOQUE: '/*' .*? '*/' -> skip;