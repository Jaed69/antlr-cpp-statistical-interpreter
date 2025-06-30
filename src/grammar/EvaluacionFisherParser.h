
// Generated from src/grammar/EvaluacionFisher.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  EvaluacionFisherParser : public antlr4::Parser {
public:
  enum {
    ESCALA_LIKERT = 1, EMPLEADO = 2, CRITERIO = 3, GRUPO = 4, FISHER = 5, 
    EVALUAR = 6, COMPARAR = 7, CONSULTAR = 8, RANKING = 9, ESTADISTICAS = 10, 
    PREDECIR = 11, NOMBRE = 12, CARGO = 13, EXPERIENCIA = 14, AREA = 15, 
    RENDIMIENTO = 16, INGENIERO = 17, ARQUITECTO = 18, SUPERVISOR = 19, 
    OPERARIO = 20, TECNICO = 21, ADMINISTRATIVO = 22, ESTRUCTURAL = 23, 
    ACABADOS = 24, INSTALACIONES = 25, OBRA_CIVIL = 26, SEGURIDAD = 27, 
    CALIDAD = 28, ALTO = 29, MEDIO = 30, BAJO = 31, PESO = 32, TIPO = 33, 
    METRICA = 34, CUANTITATIVO = 35, CUALITATIVO = 36, MIXTO = 37, PRODUCTIVIDAD = 38, 
    CALIDAD_TRABAJO = 39, SEGURIDAD_LABORAL = 40, CUMPLIMIENTO_PLAZOS = 41, 
    LIDERAZGO = 42, TRABAJO_EQUIPO = 43, CONOCIMIENTO_TECNICO = 44, ADAPTABILIDAD = 45, 
    ASISTENCIA = 46, MIEMBROS = 47, GRUPO_A = 48, GRUPO_B = 49, VARIABLES = 50, 
    USANDO = 51, CON = 52, DE = 53, POR = 54, PARA = 55, LIMITE = 56, ANOS = 57, 
    LBRACE = 58, RBRACE = 59, LPAREN = 60, RPAREN = 61, DOSPUNTOS = 62, 
    COMA = 63, NUMERO = 64, CADENA = 65, IDENTIFICADOR = 66, WS = 67, COMENTARIO_LINEA = 68, 
    COMENTARIO_BLOQUE = 69
  };

  enum {
    RuleSistema = 0, RuleDeclaracion = 1, RuleDeclaracionEmpleado = 2, RuleAtributoEmpleado = 3, 
    RuleTipoCargo = 4, RuleAreaConstructora = 5, RuleNivelRendimiento = 6, 
    RuleDeclaracionCriterio = 7, RuleTipoCriterio = 8, RuleMetricaCriterio = 9, 
    RuleDeclaracionGrupo = 10, RuleListaEmpleados = 11, RuleEvaluacion = 12, 
    RuleCalculoFisher = 13, RuleListaVariables = 14, RuleVariable = 15, 
    RuleEvaluacionIndividual = 16, RuleCriterioValoracion = 17, RuleValoracion = 18, 
    RuleComparacionGrupos = 19, RuleConsulta = 20, RuleConsultaEmpleado = 21, 
    RuleConsultaRanking = 22, RuleConsultaEstadisticas = 23, RuleConsultaPrediccion = 24
  };

  explicit EvaluacionFisherParser(antlr4::TokenStream *input);

  EvaluacionFisherParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~EvaluacionFisherParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class SistemaContext;
  class DeclaracionContext;
  class DeclaracionEmpleadoContext;
  class AtributoEmpleadoContext;
  class TipoCargoContext;
  class AreaConstructoraContext;
  class NivelRendimientoContext;
  class DeclaracionCriterioContext;
  class TipoCriterioContext;
  class MetricaCriterioContext;
  class DeclaracionGrupoContext;
  class ListaEmpleadosContext;
  class EvaluacionContext;
  class CalculoFisherContext;
  class ListaVariablesContext;
  class VariableContext;
  class EvaluacionIndividualContext;
  class CriterioValoracionContext;
  class ValoracionContext;
  class ComparacionGruposContext;
  class ConsultaContext;
  class ConsultaEmpleadoContext;
  class ConsultaRankingContext;
  class ConsultaEstadisticasContext;
  class ConsultaPrediccionContext; 

  class  SistemaContext : public antlr4::ParserRuleContext {
  public:
    SistemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DeclaracionContext *> declaracion();
    DeclaracionContext* declaracion(size_t i);
    std::vector<EvaluacionContext *> evaluacion();
    EvaluacionContext* evaluacion(size_t i);
    std::vector<ConsultaContext *> consulta();
    ConsultaContext* consulta(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SistemaContext* sistema();

  class  DeclaracionContext : public antlr4::ParserRuleContext {
  public:
    DeclaracionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaracionEmpleadoContext *declaracionEmpleado();
    DeclaracionCriterioContext *declaracionCriterio();
    DeclaracionGrupoContext *declaracionGrupo();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclaracionContext* declaracion();

  class  DeclaracionEmpleadoContext : public antlr4::ParserRuleContext {
  public:
    DeclaracionEmpleadoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EMPLEADO();
    antlr4::tree::TerminalNode *IDENTIFICADOR();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<AtributoEmpleadoContext *> atributoEmpleado();
    AtributoEmpleadoContext* atributoEmpleado(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclaracionEmpleadoContext* declaracionEmpleado();

  class  AtributoEmpleadoContext : public antlr4::ParserRuleContext {
  public:
    AtributoEmpleadoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOMBRE();
    antlr4::tree::TerminalNode *DOSPUNTOS();
    antlr4::tree::TerminalNode *CADENA();
    antlr4::tree::TerminalNode *CARGO();
    TipoCargoContext *tipoCargo();
    antlr4::tree::TerminalNode *EXPERIENCIA();
    antlr4::tree::TerminalNode *NUMERO();
    antlr4::tree::TerminalNode *ANOS();
    antlr4::tree::TerminalNode *AREA();
    AreaConstructoraContext *areaConstructora();
    antlr4::tree::TerminalNode *RENDIMIENTO();
    NivelRendimientoContext *nivelRendimiento();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AtributoEmpleadoContext* atributoEmpleado();

  class  TipoCargoContext : public antlr4::ParserRuleContext {
  public:
    TipoCargoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INGENIERO();
    antlr4::tree::TerminalNode *ARQUITECTO();
    antlr4::tree::TerminalNode *SUPERVISOR();
    antlr4::tree::TerminalNode *OPERARIO();
    antlr4::tree::TerminalNode *TECNICO();
    antlr4::tree::TerminalNode *ADMINISTRATIVO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TipoCargoContext* tipoCargo();

  class  AreaConstructoraContext : public antlr4::ParserRuleContext {
  public:
    AreaConstructoraContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ESTRUCTURAL();
    antlr4::tree::TerminalNode *ACABADOS();
    antlr4::tree::TerminalNode *INSTALACIONES();
    antlr4::tree::TerminalNode *OBRA_CIVIL();
    antlr4::tree::TerminalNode *SEGURIDAD();
    antlr4::tree::TerminalNode *CALIDAD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AreaConstructoraContext* areaConstructora();

  class  NivelRendimientoContext : public antlr4::ParserRuleContext {
  public:
    NivelRendimientoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALTO();
    antlr4::tree::TerminalNode *MEDIO();
    antlr4::tree::TerminalNode *BAJO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NivelRendimientoContext* nivelRendimiento();

  class  DeclaracionCriterioContext : public antlr4::ParserRuleContext {
  public:
    DeclaracionCriterioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CRITERIO();
    antlr4::tree::TerminalNode *IDENTIFICADOR();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> PESO();
    antlr4::tree::TerminalNode* PESO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOSPUNTOS();
    antlr4::tree::TerminalNode* DOSPUNTOS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUMERO();
    antlr4::tree::TerminalNode* NUMERO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TIPO();
    antlr4::tree::TerminalNode* TIPO(size_t i);
    std::vector<TipoCriterioContext *> tipoCriterio();
    TipoCriterioContext* tipoCriterio(size_t i);
    std::vector<antlr4::tree::TerminalNode *> METRICA();
    antlr4::tree::TerminalNode* METRICA(size_t i);
    std::vector<MetricaCriterioContext *> metricaCriterio();
    MetricaCriterioContext* metricaCriterio(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclaracionCriterioContext* declaracionCriterio();

  class  TipoCriterioContext : public antlr4::ParserRuleContext {
  public:
    TipoCriterioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CUANTITATIVO();
    antlr4::tree::TerminalNode *CUALITATIVO();
    antlr4::tree::TerminalNode *MIXTO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TipoCriterioContext* tipoCriterio();

  class  MetricaCriterioContext : public antlr4::ParserRuleContext {
  public:
    MetricaCriterioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRODUCTIVIDAD();
    antlr4::tree::TerminalNode *CALIDAD_TRABAJO();
    antlr4::tree::TerminalNode *SEGURIDAD_LABORAL();
    antlr4::tree::TerminalNode *CUMPLIMIENTO_PLAZOS();
    antlr4::tree::TerminalNode *LIDERAZGO();
    antlr4::tree::TerminalNode *TRABAJO_EQUIPO();
    antlr4::tree::TerminalNode *CONOCIMIENTO_TECNICO();
    antlr4::tree::TerminalNode *ADAPTABILIDAD();
    antlr4::tree::TerminalNode *ASISTENCIA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MetricaCriterioContext* metricaCriterio();

  class  DeclaracionGrupoContext : public antlr4::ParserRuleContext {
  public:
    DeclaracionGrupoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GRUPO();
    antlr4::tree::TerminalNode *IDENTIFICADOR();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *MIEMBROS();
    antlr4::tree::TerminalNode *DOSPUNTOS();
    ListaEmpleadosContext *listaEmpleados();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclaracionGrupoContext* declaracionGrupo();

  class  ListaEmpleadosContext : public antlr4::ParserRuleContext {
  public:
    ListaEmpleadosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFICADOR();
    antlr4::tree::TerminalNode* IDENTIFICADOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ListaEmpleadosContext* listaEmpleados();

  class  EvaluacionContext : public antlr4::ParserRuleContext {
  public:
    EvaluacionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CalculoFisherContext *calculoFisher();
    EvaluacionIndividualContext *evaluacionIndividual();
    ComparacionGruposContext *comparacionGrupos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EvaluacionContext* evaluacion();

  class  CalculoFisherContext : public antlr4::ParserRuleContext {
  public:
    CalculoFisherContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FISHER();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *GRUPO_A();
    std::vector<antlr4::tree::TerminalNode *> DOSPUNTOS();
    antlr4::tree::TerminalNode* DOSPUNTOS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFICADOR();
    antlr4::tree::TerminalNode* IDENTIFICADOR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);
    antlr4::tree::TerminalNode *GRUPO_B();
    antlr4::tree::TerminalNode *VARIABLES();
    ListaVariablesContext *listaVariables();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CalculoFisherContext* calculoFisher();

  class  ListaVariablesContext : public antlr4::ParserRuleContext {
  public:
    ListaVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMA();
    antlr4::tree::TerminalNode* COMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ListaVariablesContext* listaVariables();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRODUCTIVIDAD();
    antlr4::tree::TerminalNode *CALIDAD_TRABAJO();
    antlr4::tree::TerminalNode *SEGURIDAD_LABORAL();
    antlr4::tree::TerminalNode *CUMPLIMIENTO_PLAZOS();
    antlr4::tree::TerminalNode *LIDERAZGO();
    antlr4::tree::TerminalNode *TRABAJO_EQUIPO();
    antlr4::tree::TerminalNode *CONOCIMIENTO_TECNICO();
    antlr4::tree::TerminalNode *ADAPTABILIDAD();
    antlr4::tree::TerminalNode *ASISTENCIA();
    antlr4::tree::TerminalNode *IDENTIFICADOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableContext* variable();

  class  EvaluacionIndividualContext : public antlr4::ParserRuleContext {
  public:
    EvaluacionIndividualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVALUAR();
    antlr4::tree::TerminalNode *IDENTIFICADOR();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<CriterioValoracionContext *> criterioValoracion();
    CriterioValoracionContext* criterioValoracion(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EvaluacionIndividualContext* evaluacionIndividual();

  class  CriterioValoracionContext : public antlr4::ParserRuleContext {
  public:
    CriterioValoracionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *DOSPUNTOS();
    ValoracionContext *valoracion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CriterioValoracionContext* criterioValoracion();

  class  ValoracionContext : public antlr4::ParserRuleContext {
  public:
    ValoracionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMERO();
    antlr4::tree::TerminalNode *ESCALA_LIKERT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValoracionContext* valoracion();

  class  ComparacionGruposContext : public antlr4::ParserRuleContext {
  public:
    ComparacionGruposContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMPARAR();
    std::vector<antlr4::tree::TerminalNode *> GRUPO();
    antlr4::tree::TerminalNode* GRUPO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFICADOR();
    antlr4::tree::TerminalNode* IDENTIFICADOR(size_t i);
    antlr4::tree::TerminalNode *CON();
    antlr4::tree::TerminalNode *USANDO();
    ListaVariablesContext *listaVariables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparacionGruposContext* comparacionGrupos();

  class  ConsultaContext : public antlr4::ParserRuleContext {
  public:
    ConsultaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConsultaEmpleadoContext *consultaEmpleado();
    ConsultaRankingContext *consultaRanking();
    ConsultaEstadisticasContext *consultaEstadisticas();
    ConsultaPrediccionContext *consultaPrediccion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConsultaContext* consulta();

  class  ConsultaEmpleadoContext : public antlr4::ParserRuleContext {
  public:
    ConsultaEmpleadoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSULTAR();
    antlr4::tree::TerminalNode *EMPLEADO();
    antlr4::tree::TerminalNode *IDENTIFICADOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConsultaEmpleadoContext* consultaEmpleado();

  class  ConsultaRankingContext : public antlr4::ParserRuleContext {
  public:
    ConsultaRankingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANKING();
    antlr4::tree::TerminalNode *POR();
    VariableContext *variable();
    antlr4::tree::TerminalNode *LIMITE();
    antlr4::tree::TerminalNode *NUMERO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConsultaRankingContext* consultaRanking();

  class  ConsultaEstadisticasContext : public antlr4::ParserRuleContext {
  public:
    ConsultaEstadisticasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ESTADISTICAS();
    antlr4::tree::TerminalNode *DE();
    VariableContext *variable();
    antlr4::tree::TerminalNode *PARA();
    antlr4::tree::TerminalNode *GRUPO();
    antlr4::tree::TerminalNode *IDENTIFICADOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConsultaEstadisticasContext* consultaEstadisticas();

  class  ConsultaPrediccionContext : public antlr4::ParserRuleContext {
  public:
    ConsultaPrediccionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREDECIR();
    antlr4::tree::TerminalNode *RENDIMIENTO();
    antlr4::tree::TerminalNode *DE();
    antlr4::tree::TerminalNode *IDENTIFICADOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConsultaPrediccionContext* consultaPrediccion();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

