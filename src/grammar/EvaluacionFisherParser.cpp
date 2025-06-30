
// Generated from src/grammar/EvaluacionFisher.g4 by ANTLR 4.12.0


#include "EvaluacionFisherListener.h"

#include "EvaluacionFisherParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct EvaluacionFisherParserStaticData final {
  EvaluacionFisherParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  EvaluacionFisherParserStaticData(const EvaluacionFisherParserStaticData&) = delete;
  EvaluacionFisherParserStaticData(EvaluacionFisherParserStaticData&&) = delete;
  EvaluacionFisherParserStaticData& operator=(const EvaluacionFisherParserStaticData&) = delete;
  EvaluacionFisherParserStaticData& operator=(EvaluacionFisherParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag evaluacionfisherParserOnceFlag;
EvaluacionFisherParserStaticData *evaluacionfisherParserStaticData = nullptr;

void evaluacionfisherParserInitialize() {
  assert(evaluacionfisherParserStaticData == nullptr);
  auto staticData = std::make_unique<EvaluacionFisherParserStaticData>(
    std::vector<std::string>{
      "sistema", "declaracion", "declaracionEmpleado", "atributoEmpleado", 
      "tipoCargo", "areaConstructora", "nivelRendimiento", "declaracionCriterio", 
      "tipoCriterio", "metricaCriterio", "declaracionGrupo", "listaEmpleados", 
      "evaluacion", "calculoFisher", "listaVariables", "variable", "evaluacionIndividual", 
      "criterioValoracion", "valoracion", "comparacionGrupos", "consulta", 
      "consultaEmpleado", "consultaRanking", "consultaEstadisticas", "consultaPrediccion"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "'{'", "'}'", "'('", "')'", "':'", "','"
    },
    std::vector<std::string>{
      "", "ESCALA_LIKERT", "EMPLEADO", "CRITERIO", "GRUPO", "FISHER", "EVALUAR", 
      "COMPARAR", "CONSULTAR", "RANKING", "ESTADISTICAS", "PREDECIR", "NOMBRE", 
      "CARGO", "EXPERIENCIA", "AREA", "RENDIMIENTO", "INGENIERO", "ARQUITECTO", 
      "SUPERVISOR", "OPERARIO", "TECNICO", "ADMINISTRATIVO", "ESTRUCTURAL", 
      "ACABADOS", "INSTALACIONES", "OBRA_CIVIL", "SEGURIDAD", "CALIDAD", 
      "ALTO", "MEDIO", "BAJO", "PESO", "TIPO", "METRICA", "CUANTITATIVO", 
      "CUALITATIVO", "MIXTO", "PRODUCTIVIDAD", "CALIDAD_TRABAJO", "SEGURIDAD_LABORAL", 
      "CUMPLIMIENTO_PLAZOS", "LIDERAZGO", "TRABAJO_EQUIPO", "CONOCIMIENTO_TECNICO", 
      "ADAPTABILIDAD", "ASISTENCIA", "MIEMBROS", "GRUPO_A", "GRUPO_B", "VARIABLES", 
      "USANDO", "CON", "DE", "POR", "PARA", "LIMITE", "ANOS", "LBRACE", 
      "RBRACE", "LPAREN", "RPAREN", "DOSPUNTOS", "COMA", "NUMERO", "CADENA", 
      "IDENTIFICADOR", "WS", "COMENTARIO_LINEA", "COMENTARIO_BLOQUE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,69,226,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,1,0,1,0,4,0,54,8,0,11,0,12,0,55,
  	1,0,1,0,1,1,1,1,1,1,3,1,63,8,1,1,2,1,2,1,2,1,2,4,2,69,8,2,11,2,12,2,70,
  	1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,3,3,91,8,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,4,7,111,8,7,11,7,12,7,112,1,7,1,7,1,8,1,8,1,9,1,9,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,5,11,132,8,11,10,11,
  	12,11,135,9,11,1,12,1,12,1,12,3,12,140,8,12,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,5,14,
  	160,8,14,10,14,12,14,163,9,14,1,15,1,15,1,16,1,16,1,16,1,16,4,16,171,
  	8,16,11,16,12,16,172,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,1,19,1,19,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,3,20,196,8,20,
  	1,21,1,21,1,21,1,21,1,22,1,22,1,22,3,22,205,8,22,1,22,1,22,3,22,209,8,
  	22,1,23,1,23,1,23,3,23,214,8,23,1,23,1,23,1,23,3,23,219,8,23,1,24,1,24,
  	1,24,1,24,1,24,1,24,0,0,25,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,
  	32,34,36,38,40,42,44,46,48,0,7,1,0,17,22,1,0,23,28,1,0,29,31,1,0,35,37,
  	1,0,38,46,2,0,38,46,66,66,2,0,1,1,64,64,225,0,53,1,0,0,0,2,62,1,0,0,0,
  	4,64,1,0,0,0,6,90,1,0,0,0,8,92,1,0,0,0,10,94,1,0,0,0,12,96,1,0,0,0,14,
  	98,1,0,0,0,16,116,1,0,0,0,18,118,1,0,0,0,20,120,1,0,0,0,22,128,1,0,0,
  	0,24,139,1,0,0,0,26,141,1,0,0,0,28,156,1,0,0,0,30,164,1,0,0,0,32,166,
  	1,0,0,0,34,176,1,0,0,0,36,180,1,0,0,0,38,182,1,0,0,0,40,195,1,0,0,0,42,
  	197,1,0,0,0,44,201,1,0,0,0,46,210,1,0,0,0,48,220,1,0,0,0,50,54,3,2,1,
  	0,51,54,3,24,12,0,52,54,3,40,20,0,53,50,1,0,0,0,53,51,1,0,0,0,53,52,1,
  	0,0,0,54,55,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,57,1,0,0,0,57,58,5,
  	0,0,1,58,1,1,0,0,0,59,63,3,4,2,0,60,63,3,14,7,0,61,63,3,20,10,0,62,59,
  	1,0,0,0,62,60,1,0,0,0,62,61,1,0,0,0,63,3,1,0,0,0,64,65,5,2,0,0,65,66,
  	5,66,0,0,66,68,5,58,0,0,67,69,3,6,3,0,68,67,1,0,0,0,69,70,1,0,0,0,70,
  	68,1,0,0,0,70,71,1,0,0,0,71,72,1,0,0,0,72,73,5,59,0,0,73,5,1,0,0,0,74,
  	75,5,12,0,0,75,76,5,62,0,0,76,91,5,65,0,0,77,78,5,13,0,0,78,79,5,62,0,
  	0,79,91,3,8,4,0,80,81,5,14,0,0,81,82,5,62,0,0,82,83,5,64,0,0,83,91,5,
  	57,0,0,84,85,5,15,0,0,85,86,5,62,0,0,86,91,3,10,5,0,87,88,5,16,0,0,88,
  	89,5,62,0,0,89,91,3,12,6,0,90,74,1,0,0,0,90,77,1,0,0,0,90,80,1,0,0,0,
  	90,84,1,0,0,0,90,87,1,0,0,0,91,7,1,0,0,0,92,93,7,0,0,0,93,9,1,0,0,0,94,
  	95,7,1,0,0,95,11,1,0,0,0,96,97,7,2,0,0,97,13,1,0,0,0,98,99,5,3,0,0,99,
  	100,5,66,0,0,100,110,5,58,0,0,101,102,5,32,0,0,102,103,5,62,0,0,103,111,
  	5,64,0,0,104,105,5,33,0,0,105,106,5,62,0,0,106,111,3,16,8,0,107,108,5,
  	34,0,0,108,109,5,62,0,0,109,111,3,18,9,0,110,101,1,0,0,0,110,104,1,0,
  	0,0,110,107,1,0,0,0,111,112,1,0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,
  	114,1,0,0,0,114,115,5,59,0,0,115,15,1,0,0,0,116,117,7,3,0,0,117,17,1,
  	0,0,0,118,119,7,4,0,0,119,19,1,0,0,0,120,121,5,4,0,0,121,122,5,66,0,0,
  	122,123,5,58,0,0,123,124,5,47,0,0,124,125,5,62,0,0,125,126,3,22,11,0,
  	126,127,5,59,0,0,127,21,1,0,0,0,128,133,5,66,0,0,129,130,5,63,0,0,130,
  	132,5,66,0,0,131,129,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,133,134,
  	1,0,0,0,134,23,1,0,0,0,135,133,1,0,0,0,136,140,3,26,13,0,137,140,3,32,
  	16,0,138,140,3,38,19,0,139,136,1,0,0,0,139,137,1,0,0,0,139,138,1,0,0,
  	0,140,25,1,0,0,0,141,142,5,5,0,0,142,143,5,60,0,0,143,144,5,48,0,0,144,
  	145,5,62,0,0,145,146,5,66,0,0,146,147,5,63,0,0,147,148,5,49,0,0,148,149,
  	5,62,0,0,149,150,5,66,0,0,150,151,5,63,0,0,151,152,5,50,0,0,152,153,5,
  	62,0,0,153,154,3,28,14,0,154,155,5,61,0,0,155,27,1,0,0,0,156,161,3,30,
  	15,0,157,158,5,63,0,0,158,160,3,30,15,0,159,157,1,0,0,0,160,163,1,0,0,
  	0,161,159,1,0,0,0,161,162,1,0,0,0,162,29,1,0,0,0,163,161,1,0,0,0,164,
  	165,7,5,0,0,165,31,1,0,0,0,166,167,5,6,0,0,167,168,5,66,0,0,168,170,5,
  	58,0,0,169,171,3,34,17,0,170,169,1,0,0,0,171,172,1,0,0,0,172,170,1,0,
  	0,0,172,173,1,0,0,0,173,174,1,0,0,0,174,175,5,59,0,0,175,33,1,0,0,0,176,
  	177,3,30,15,0,177,178,5,62,0,0,178,179,3,36,18,0,179,35,1,0,0,0,180,181,
  	7,6,0,0,181,37,1,0,0,0,182,183,5,7,0,0,183,184,5,4,0,0,184,185,5,66,0,
  	0,185,186,5,52,0,0,186,187,5,4,0,0,187,188,5,66,0,0,188,189,5,51,0,0,
  	189,190,3,28,14,0,190,39,1,0,0,0,191,196,3,42,21,0,192,196,3,44,22,0,
  	193,196,3,46,23,0,194,196,3,48,24,0,195,191,1,0,0,0,195,192,1,0,0,0,195,
  	193,1,0,0,0,195,194,1,0,0,0,196,41,1,0,0,0,197,198,5,8,0,0,198,199,5,
  	2,0,0,199,200,5,66,0,0,200,43,1,0,0,0,201,204,5,9,0,0,202,203,5,54,0,
  	0,203,205,3,30,15,0,204,202,1,0,0,0,204,205,1,0,0,0,205,208,1,0,0,0,206,
  	207,5,56,0,0,207,209,5,64,0,0,208,206,1,0,0,0,208,209,1,0,0,0,209,45,
  	1,0,0,0,210,213,5,10,0,0,211,212,5,53,0,0,212,214,3,30,15,0,213,211,1,
  	0,0,0,213,214,1,0,0,0,214,218,1,0,0,0,215,216,5,55,0,0,216,217,5,4,0,
  	0,217,219,5,66,0,0,218,215,1,0,0,0,218,219,1,0,0,0,219,47,1,0,0,0,220,
  	221,5,11,0,0,221,222,5,16,0,0,222,223,5,53,0,0,223,224,5,66,0,0,224,49,
  	1,0,0,0,16,53,55,62,70,90,110,112,133,139,161,172,195,204,208,213,218
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  evaluacionfisherParserStaticData = staticData.release();
}

}

EvaluacionFisherParser::EvaluacionFisherParser(TokenStream *input) : EvaluacionFisherParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

EvaluacionFisherParser::EvaluacionFisherParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  EvaluacionFisherParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *evaluacionfisherParserStaticData->atn, evaluacionfisherParserStaticData->decisionToDFA, evaluacionfisherParserStaticData->sharedContextCache, options);
}

EvaluacionFisherParser::~EvaluacionFisherParser() {
  delete _interpreter;
}

const atn::ATN& EvaluacionFisherParser::getATN() const {
  return *evaluacionfisherParserStaticData->atn;
}

std::string EvaluacionFisherParser::getGrammarFileName() const {
  return "EvaluacionFisher.g4";
}

const std::vector<std::string>& EvaluacionFisherParser::getRuleNames() const {
  return evaluacionfisherParserStaticData->ruleNames;
}

const dfa::Vocabulary& EvaluacionFisherParser::getVocabulary() const {
  return evaluacionfisherParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView EvaluacionFisherParser::getSerializedATN() const {
  return evaluacionfisherParserStaticData->serializedATN;
}


//----------------- SistemaContext ------------------------------------------------------------------

EvaluacionFisherParser::SistemaContext::SistemaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::SistemaContext::EOF() {
  return getToken(EvaluacionFisherParser::EOF, 0);
}

std::vector<EvaluacionFisherParser::DeclaracionContext *> EvaluacionFisherParser::SistemaContext::declaracion() {
  return getRuleContexts<EvaluacionFisherParser::DeclaracionContext>();
}

EvaluacionFisherParser::DeclaracionContext* EvaluacionFisherParser::SistemaContext::declaracion(size_t i) {
  return getRuleContext<EvaluacionFisherParser::DeclaracionContext>(i);
}

std::vector<EvaluacionFisherParser::EvaluacionContext *> EvaluacionFisherParser::SistemaContext::evaluacion() {
  return getRuleContexts<EvaluacionFisherParser::EvaluacionContext>();
}

EvaluacionFisherParser::EvaluacionContext* EvaluacionFisherParser::SistemaContext::evaluacion(size_t i) {
  return getRuleContext<EvaluacionFisherParser::EvaluacionContext>(i);
}

std::vector<EvaluacionFisherParser::ConsultaContext *> EvaluacionFisherParser::SistemaContext::consulta() {
  return getRuleContexts<EvaluacionFisherParser::ConsultaContext>();
}

EvaluacionFisherParser::ConsultaContext* EvaluacionFisherParser::SistemaContext::consulta(size_t i) {
  return getRuleContext<EvaluacionFisherParser::ConsultaContext>(i);
}


size_t EvaluacionFisherParser::SistemaContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleSistema;
}

void EvaluacionFisherParser::SistemaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSistema(this);
}

void EvaluacionFisherParser::SistemaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSistema(this);
}

EvaluacionFisherParser::SistemaContext* EvaluacionFisherParser::sistema() {
  SistemaContext *_localctx = _tracker.createInstance<SistemaContext>(_ctx, getState());
  enterRule(_localctx, 0, EvaluacionFisherParser::RuleSistema);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(53);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case EvaluacionFisherParser::EMPLEADO:
        case EvaluacionFisherParser::CRITERIO:
        case EvaluacionFisherParser::GRUPO: {
          setState(50);
          declaracion();
          break;
        }

        case EvaluacionFisherParser::FISHER:
        case EvaluacionFisherParser::EVALUAR:
        case EvaluacionFisherParser::COMPARAR: {
          setState(51);
          evaluacion();
          break;
        }

        case EvaluacionFisherParser::CONSULTAR:
        case EvaluacionFisherParser::RANKING:
        case EvaluacionFisherParser::ESTADISTICAS:
        case EvaluacionFisherParser::PREDECIR: {
          setState(52);
          consulta();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(55); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4092) != 0));
    setState(57);
    match(EvaluacionFisherParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaracionContext ------------------------------------------------------------------

EvaluacionFisherParser::DeclaracionContext::DeclaracionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EvaluacionFisherParser::DeclaracionEmpleadoContext* EvaluacionFisherParser::DeclaracionContext::declaracionEmpleado() {
  return getRuleContext<EvaluacionFisherParser::DeclaracionEmpleadoContext>(0);
}

EvaluacionFisherParser::DeclaracionCriterioContext* EvaluacionFisherParser::DeclaracionContext::declaracionCriterio() {
  return getRuleContext<EvaluacionFisherParser::DeclaracionCriterioContext>(0);
}

EvaluacionFisherParser::DeclaracionGrupoContext* EvaluacionFisherParser::DeclaracionContext::declaracionGrupo() {
  return getRuleContext<EvaluacionFisherParser::DeclaracionGrupoContext>(0);
}


size_t EvaluacionFisherParser::DeclaracionContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleDeclaracion;
}

void EvaluacionFisherParser::DeclaracionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaracion(this);
}

void EvaluacionFisherParser::DeclaracionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaracion(this);
}

EvaluacionFisherParser::DeclaracionContext* EvaluacionFisherParser::declaracion() {
  DeclaracionContext *_localctx = _tracker.createInstance<DeclaracionContext>(_ctx, getState());
  enterRule(_localctx, 2, EvaluacionFisherParser::RuleDeclaracion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EvaluacionFisherParser::EMPLEADO: {
        enterOuterAlt(_localctx, 1);
        setState(59);
        declaracionEmpleado();
        break;
      }

      case EvaluacionFisherParser::CRITERIO: {
        enterOuterAlt(_localctx, 2);
        setState(60);
        declaracionCriterio();
        break;
      }

      case EvaluacionFisherParser::GRUPO: {
        enterOuterAlt(_localctx, 3);
        setState(61);
        declaracionGrupo();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaracionEmpleadoContext ------------------------------------------------------------------

EvaluacionFisherParser::DeclaracionEmpleadoContext::DeclaracionEmpleadoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionEmpleadoContext::EMPLEADO() {
  return getToken(EvaluacionFisherParser::EMPLEADO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionEmpleadoContext::IDENTIFICADOR() {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, 0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionEmpleadoContext::LBRACE() {
  return getToken(EvaluacionFisherParser::LBRACE, 0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionEmpleadoContext::RBRACE() {
  return getToken(EvaluacionFisherParser::RBRACE, 0);
}

std::vector<EvaluacionFisherParser::AtributoEmpleadoContext *> EvaluacionFisherParser::DeclaracionEmpleadoContext::atributoEmpleado() {
  return getRuleContexts<EvaluacionFisherParser::AtributoEmpleadoContext>();
}

EvaluacionFisherParser::AtributoEmpleadoContext* EvaluacionFisherParser::DeclaracionEmpleadoContext::atributoEmpleado(size_t i) {
  return getRuleContext<EvaluacionFisherParser::AtributoEmpleadoContext>(i);
}


size_t EvaluacionFisherParser::DeclaracionEmpleadoContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleDeclaracionEmpleado;
}

void EvaluacionFisherParser::DeclaracionEmpleadoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaracionEmpleado(this);
}

void EvaluacionFisherParser::DeclaracionEmpleadoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaracionEmpleado(this);
}

EvaluacionFisherParser::DeclaracionEmpleadoContext* EvaluacionFisherParser::declaracionEmpleado() {
  DeclaracionEmpleadoContext *_localctx = _tracker.createInstance<DeclaracionEmpleadoContext>(_ctx, getState());
  enterRule(_localctx, 4, EvaluacionFisherParser::RuleDeclaracionEmpleado);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(EvaluacionFisherParser::EMPLEADO);
    setState(65);
    match(EvaluacionFisherParser::IDENTIFICADOR);
    setState(66);
    match(EvaluacionFisherParser::LBRACE);
    setState(68); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(67);
      atributoEmpleado();
      setState(70); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 126976) != 0));
    setState(72);
    match(EvaluacionFisherParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtributoEmpleadoContext ------------------------------------------------------------------

EvaluacionFisherParser::AtributoEmpleadoContext::AtributoEmpleadoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::AtributoEmpleadoContext::NOMBRE() {
  return getToken(EvaluacionFisherParser::NOMBRE, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AtributoEmpleadoContext::DOSPUNTOS() {
  return getToken(EvaluacionFisherParser::DOSPUNTOS, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AtributoEmpleadoContext::CADENA() {
  return getToken(EvaluacionFisherParser::CADENA, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AtributoEmpleadoContext::CARGO() {
  return getToken(EvaluacionFisherParser::CARGO, 0);
}

EvaluacionFisherParser::TipoCargoContext* EvaluacionFisherParser::AtributoEmpleadoContext::tipoCargo() {
  return getRuleContext<EvaluacionFisherParser::TipoCargoContext>(0);
}

tree::TerminalNode* EvaluacionFisherParser::AtributoEmpleadoContext::EXPERIENCIA() {
  return getToken(EvaluacionFisherParser::EXPERIENCIA, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AtributoEmpleadoContext::NUMERO() {
  return getToken(EvaluacionFisherParser::NUMERO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AtributoEmpleadoContext::ANOS() {
  return getToken(EvaluacionFisherParser::ANOS, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AtributoEmpleadoContext::AREA() {
  return getToken(EvaluacionFisherParser::AREA, 0);
}

EvaluacionFisherParser::AreaConstructoraContext* EvaluacionFisherParser::AtributoEmpleadoContext::areaConstructora() {
  return getRuleContext<EvaluacionFisherParser::AreaConstructoraContext>(0);
}

tree::TerminalNode* EvaluacionFisherParser::AtributoEmpleadoContext::RENDIMIENTO() {
  return getToken(EvaluacionFisherParser::RENDIMIENTO, 0);
}

EvaluacionFisherParser::NivelRendimientoContext* EvaluacionFisherParser::AtributoEmpleadoContext::nivelRendimiento() {
  return getRuleContext<EvaluacionFisherParser::NivelRendimientoContext>(0);
}


size_t EvaluacionFisherParser::AtributoEmpleadoContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleAtributoEmpleado;
}

void EvaluacionFisherParser::AtributoEmpleadoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtributoEmpleado(this);
}

void EvaluacionFisherParser::AtributoEmpleadoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtributoEmpleado(this);
}

EvaluacionFisherParser::AtributoEmpleadoContext* EvaluacionFisherParser::atributoEmpleado() {
  AtributoEmpleadoContext *_localctx = _tracker.createInstance<AtributoEmpleadoContext>(_ctx, getState());
  enterRule(_localctx, 6, EvaluacionFisherParser::RuleAtributoEmpleado);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EvaluacionFisherParser::NOMBRE: {
        enterOuterAlt(_localctx, 1);
        setState(74);
        match(EvaluacionFisherParser::NOMBRE);
        setState(75);
        match(EvaluacionFisherParser::DOSPUNTOS);
        setState(76);
        match(EvaluacionFisherParser::CADENA);
        break;
      }

      case EvaluacionFisherParser::CARGO: {
        enterOuterAlt(_localctx, 2);
        setState(77);
        match(EvaluacionFisherParser::CARGO);
        setState(78);
        match(EvaluacionFisherParser::DOSPUNTOS);
        setState(79);
        tipoCargo();
        break;
      }

      case EvaluacionFisherParser::EXPERIENCIA: {
        enterOuterAlt(_localctx, 3);
        setState(80);
        match(EvaluacionFisherParser::EXPERIENCIA);
        setState(81);
        match(EvaluacionFisherParser::DOSPUNTOS);
        setState(82);
        match(EvaluacionFisherParser::NUMERO);
        setState(83);
        match(EvaluacionFisherParser::ANOS);
        break;
      }

      case EvaluacionFisherParser::AREA: {
        enterOuterAlt(_localctx, 4);
        setState(84);
        match(EvaluacionFisherParser::AREA);
        setState(85);
        match(EvaluacionFisherParser::DOSPUNTOS);
        setState(86);
        areaConstructora();
        break;
      }

      case EvaluacionFisherParser::RENDIMIENTO: {
        enterOuterAlt(_localctx, 5);
        setState(87);
        match(EvaluacionFisherParser::RENDIMIENTO);
        setState(88);
        match(EvaluacionFisherParser::DOSPUNTOS);
        setState(89);
        nivelRendimiento();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TipoCargoContext ------------------------------------------------------------------

EvaluacionFisherParser::TipoCargoContext::TipoCargoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::TipoCargoContext::INGENIERO() {
  return getToken(EvaluacionFisherParser::INGENIERO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::TipoCargoContext::ARQUITECTO() {
  return getToken(EvaluacionFisherParser::ARQUITECTO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::TipoCargoContext::SUPERVISOR() {
  return getToken(EvaluacionFisherParser::SUPERVISOR, 0);
}

tree::TerminalNode* EvaluacionFisherParser::TipoCargoContext::OPERARIO() {
  return getToken(EvaluacionFisherParser::OPERARIO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::TipoCargoContext::TECNICO() {
  return getToken(EvaluacionFisherParser::TECNICO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::TipoCargoContext::ADMINISTRATIVO() {
  return getToken(EvaluacionFisherParser::ADMINISTRATIVO, 0);
}


size_t EvaluacionFisherParser::TipoCargoContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleTipoCargo;
}

void EvaluacionFisherParser::TipoCargoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTipoCargo(this);
}

void EvaluacionFisherParser::TipoCargoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTipoCargo(this);
}

EvaluacionFisherParser::TipoCargoContext* EvaluacionFisherParser::tipoCargo() {
  TipoCargoContext *_localctx = _tracker.createInstance<TipoCargoContext>(_ctx, getState());
  enterRule(_localctx, 8, EvaluacionFisherParser::RuleTipoCargo);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8257536) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AreaConstructoraContext ------------------------------------------------------------------

EvaluacionFisherParser::AreaConstructoraContext::AreaConstructoraContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::AreaConstructoraContext::ESTRUCTURAL() {
  return getToken(EvaluacionFisherParser::ESTRUCTURAL, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AreaConstructoraContext::ACABADOS() {
  return getToken(EvaluacionFisherParser::ACABADOS, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AreaConstructoraContext::INSTALACIONES() {
  return getToken(EvaluacionFisherParser::INSTALACIONES, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AreaConstructoraContext::OBRA_CIVIL() {
  return getToken(EvaluacionFisherParser::OBRA_CIVIL, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AreaConstructoraContext::SEGURIDAD() {
  return getToken(EvaluacionFisherParser::SEGURIDAD, 0);
}

tree::TerminalNode* EvaluacionFisherParser::AreaConstructoraContext::CALIDAD() {
  return getToken(EvaluacionFisherParser::CALIDAD, 0);
}


size_t EvaluacionFisherParser::AreaConstructoraContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleAreaConstructora;
}

void EvaluacionFisherParser::AreaConstructoraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAreaConstructora(this);
}

void EvaluacionFisherParser::AreaConstructoraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAreaConstructora(this);
}

EvaluacionFisherParser::AreaConstructoraContext* EvaluacionFisherParser::areaConstructora() {
  AreaConstructoraContext *_localctx = _tracker.createInstance<AreaConstructoraContext>(_ctx, getState());
  enterRule(_localctx, 10, EvaluacionFisherParser::RuleAreaConstructora);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 528482304) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NivelRendimientoContext ------------------------------------------------------------------

EvaluacionFisherParser::NivelRendimientoContext::NivelRendimientoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::NivelRendimientoContext::ALTO() {
  return getToken(EvaluacionFisherParser::ALTO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::NivelRendimientoContext::MEDIO() {
  return getToken(EvaluacionFisherParser::MEDIO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::NivelRendimientoContext::BAJO() {
  return getToken(EvaluacionFisherParser::BAJO, 0);
}


size_t EvaluacionFisherParser::NivelRendimientoContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleNivelRendimiento;
}

void EvaluacionFisherParser::NivelRendimientoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNivelRendimiento(this);
}

void EvaluacionFisherParser::NivelRendimientoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNivelRendimiento(this);
}

EvaluacionFisherParser::NivelRendimientoContext* EvaluacionFisherParser::nivelRendimiento() {
  NivelRendimientoContext *_localctx = _tracker.createInstance<NivelRendimientoContext>(_ctx, getState());
  enterRule(_localctx, 12, EvaluacionFisherParser::RuleNivelRendimiento);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3758096384) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaracionCriterioContext ------------------------------------------------------------------

EvaluacionFisherParser::DeclaracionCriterioContext::DeclaracionCriterioContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionCriterioContext::CRITERIO() {
  return getToken(EvaluacionFisherParser::CRITERIO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionCriterioContext::IDENTIFICADOR() {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, 0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionCriterioContext::LBRACE() {
  return getToken(EvaluacionFisherParser::LBRACE, 0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionCriterioContext::RBRACE() {
  return getToken(EvaluacionFisherParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::DeclaracionCriterioContext::PESO() {
  return getTokens(EvaluacionFisherParser::PESO);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionCriterioContext::PESO(size_t i) {
  return getToken(EvaluacionFisherParser::PESO, i);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::DeclaracionCriterioContext::DOSPUNTOS() {
  return getTokens(EvaluacionFisherParser::DOSPUNTOS);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionCriterioContext::DOSPUNTOS(size_t i) {
  return getToken(EvaluacionFisherParser::DOSPUNTOS, i);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::DeclaracionCriterioContext::NUMERO() {
  return getTokens(EvaluacionFisherParser::NUMERO);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionCriterioContext::NUMERO(size_t i) {
  return getToken(EvaluacionFisherParser::NUMERO, i);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::DeclaracionCriterioContext::TIPO() {
  return getTokens(EvaluacionFisherParser::TIPO);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionCriterioContext::TIPO(size_t i) {
  return getToken(EvaluacionFisherParser::TIPO, i);
}

std::vector<EvaluacionFisherParser::TipoCriterioContext *> EvaluacionFisherParser::DeclaracionCriterioContext::tipoCriterio() {
  return getRuleContexts<EvaluacionFisherParser::TipoCriterioContext>();
}

EvaluacionFisherParser::TipoCriterioContext* EvaluacionFisherParser::DeclaracionCriterioContext::tipoCriterio(size_t i) {
  return getRuleContext<EvaluacionFisherParser::TipoCriterioContext>(i);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::DeclaracionCriterioContext::METRICA() {
  return getTokens(EvaluacionFisherParser::METRICA);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionCriterioContext::METRICA(size_t i) {
  return getToken(EvaluacionFisherParser::METRICA, i);
}

std::vector<EvaluacionFisherParser::MetricaCriterioContext *> EvaluacionFisherParser::DeclaracionCriterioContext::metricaCriterio() {
  return getRuleContexts<EvaluacionFisherParser::MetricaCriterioContext>();
}

EvaluacionFisherParser::MetricaCriterioContext* EvaluacionFisherParser::DeclaracionCriterioContext::metricaCriterio(size_t i) {
  return getRuleContext<EvaluacionFisherParser::MetricaCriterioContext>(i);
}


size_t EvaluacionFisherParser::DeclaracionCriterioContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleDeclaracionCriterio;
}

void EvaluacionFisherParser::DeclaracionCriterioContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaracionCriterio(this);
}

void EvaluacionFisherParser::DeclaracionCriterioContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaracionCriterio(this);
}

EvaluacionFisherParser::DeclaracionCriterioContext* EvaluacionFisherParser::declaracionCriterio() {
  DeclaracionCriterioContext *_localctx = _tracker.createInstance<DeclaracionCriterioContext>(_ctx, getState());
  enterRule(_localctx, 14, EvaluacionFisherParser::RuleDeclaracionCriterio);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(EvaluacionFisherParser::CRITERIO);
    setState(99);
    match(EvaluacionFisherParser::IDENTIFICADOR);
    setState(100);
    match(EvaluacionFisherParser::LBRACE);
    setState(110); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(110);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case EvaluacionFisherParser::PESO: {
          setState(101);
          match(EvaluacionFisherParser::PESO);
          setState(102);
          match(EvaluacionFisherParser::DOSPUNTOS);
          setState(103);
          match(EvaluacionFisherParser::NUMERO);
          break;
        }

        case EvaluacionFisherParser::TIPO: {
          setState(104);
          match(EvaluacionFisherParser::TIPO);
          setState(105);
          match(EvaluacionFisherParser::DOSPUNTOS);
          setState(106);
          tipoCriterio();
          break;
        }

        case EvaluacionFisherParser::METRICA: {
          setState(107);
          match(EvaluacionFisherParser::METRICA);
          setState(108);
          match(EvaluacionFisherParser::DOSPUNTOS);
          setState(109);
          metricaCriterio();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(112); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 30064771072) != 0));
    setState(114);
    match(EvaluacionFisherParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TipoCriterioContext ------------------------------------------------------------------

EvaluacionFisherParser::TipoCriterioContext::TipoCriterioContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::TipoCriterioContext::CUANTITATIVO() {
  return getToken(EvaluacionFisherParser::CUANTITATIVO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::TipoCriterioContext::CUALITATIVO() {
  return getToken(EvaluacionFisherParser::CUALITATIVO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::TipoCriterioContext::MIXTO() {
  return getToken(EvaluacionFisherParser::MIXTO, 0);
}


size_t EvaluacionFisherParser::TipoCriterioContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleTipoCriterio;
}

void EvaluacionFisherParser::TipoCriterioContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTipoCriterio(this);
}

void EvaluacionFisherParser::TipoCriterioContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTipoCriterio(this);
}

EvaluacionFisherParser::TipoCriterioContext* EvaluacionFisherParser::tipoCriterio() {
  TipoCriterioContext *_localctx = _tracker.createInstance<TipoCriterioContext>(_ctx, getState());
  enterRule(_localctx, 16, EvaluacionFisherParser::RuleTipoCriterio);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 240518168576) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MetricaCriterioContext ------------------------------------------------------------------

EvaluacionFisherParser::MetricaCriterioContext::MetricaCriterioContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::MetricaCriterioContext::PRODUCTIVIDAD() {
  return getToken(EvaluacionFisherParser::PRODUCTIVIDAD, 0);
}

tree::TerminalNode* EvaluacionFisherParser::MetricaCriterioContext::CALIDAD_TRABAJO() {
  return getToken(EvaluacionFisherParser::CALIDAD_TRABAJO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::MetricaCriterioContext::SEGURIDAD_LABORAL() {
  return getToken(EvaluacionFisherParser::SEGURIDAD_LABORAL, 0);
}

tree::TerminalNode* EvaluacionFisherParser::MetricaCriterioContext::CUMPLIMIENTO_PLAZOS() {
  return getToken(EvaluacionFisherParser::CUMPLIMIENTO_PLAZOS, 0);
}

tree::TerminalNode* EvaluacionFisherParser::MetricaCriterioContext::LIDERAZGO() {
  return getToken(EvaluacionFisherParser::LIDERAZGO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::MetricaCriterioContext::TRABAJO_EQUIPO() {
  return getToken(EvaluacionFisherParser::TRABAJO_EQUIPO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::MetricaCriterioContext::CONOCIMIENTO_TECNICO() {
  return getToken(EvaluacionFisherParser::CONOCIMIENTO_TECNICO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::MetricaCriterioContext::ADAPTABILIDAD() {
  return getToken(EvaluacionFisherParser::ADAPTABILIDAD, 0);
}

tree::TerminalNode* EvaluacionFisherParser::MetricaCriterioContext::ASISTENCIA() {
  return getToken(EvaluacionFisherParser::ASISTENCIA, 0);
}


size_t EvaluacionFisherParser::MetricaCriterioContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleMetricaCriterio;
}

void EvaluacionFisherParser::MetricaCriterioContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMetricaCriterio(this);
}

void EvaluacionFisherParser::MetricaCriterioContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMetricaCriterio(this);
}

EvaluacionFisherParser::MetricaCriterioContext* EvaluacionFisherParser::metricaCriterio() {
  MetricaCriterioContext *_localctx = _tracker.createInstance<MetricaCriterioContext>(_ctx, getState());
  enterRule(_localctx, 18, EvaluacionFisherParser::RuleMetricaCriterio);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 140462610448384) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaracionGrupoContext ------------------------------------------------------------------

EvaluacionFisherParser::DeclaracionGrupoContext::DeclaracionGrupoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionGrupoContext::GRUPO() {
  return getToken(EvaluacionFisherParser::GRUPO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionGrupoContext::IDENTIFICADOR() {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, 0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionGrupoContext::LBRACE() {
  return getToken(EvaluacionFisherParser::LBRACE, 0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionGrupoContext::MIEMBROS() {
  return getToken(EvaluacionFisherParser::MIEMBROS, 0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionGrupoContext::DOSPUNTOS() {
  return getToken(EvaluacionFisherParser::DOSPUNTOS, 0);
}

EvaluacionFisherParser::ListaEmpleadosContext* EvaluacionFisherParser::DeclaracionGrupoContext::listaEmpleados() {
  return getRuleContext<EvaluacionFisherParser::ListaEmpleadosContext>(0);
}

tree::TerminalNode* EvaluacionFisherParser::DeclaracionGrupoContext::RBRACE() {
  return getToken(EvaluacionFisherParser::RBRACE, 0);
}


size_t EvaluacionFisherParser::DeclaracionGrupoContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleDeclaracionGrupo;
}

void EvaluacionFisherParser::DeclaracionGrupoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaracionGrupo(this);
}

void EvaluacionFisherParser::DeclaracionGrupoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaracionGrupo(this);
}

EvaluacionFisherParser::DeclaracionGrupoContext* EvaluacionFisherParser::declaracionGrupo() {
  DeclaracionGrupoContext *_localctx = _tracker.createInstance<DeclaracionGrupoContext>(_ctx, getState());
  enterRule(_localctx, 20, EvaluacionFisherParser::RuleDeclaracionGrupo);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(EvaluacionFisherParser::GRUPO);
    setState(121);
    match(EvaluacionFisherParser::IDENTIFICADOR);
    setState(122);
    match(EvaluacionFisherParser::LBRACE);
    setState(123);
    match(EvaluacionFisherParser::MIEMBROS);
    setState(124);
    match(EvaluacionFisherParser::DOSPUNTOS);
    setState(125);
    listaEmpleados();
    setState(126);
    match(EvaluacionFisherParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListaEmpleadosContext ------------------------------------------------------------------

EvaluacionFisherParser::ListaEmpleadosContext::ListaEmpleadosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::ListaEmpleadosContext::IDENTIFICADOR() {
  return getTokens(EvaluacionFisherParser::IDENTIFICADOR);
}

tree::TerminalNode* EvaluacionFisherParser::ListaEmpleadosContext::IDENTIFICADOR(size_t i) {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, i);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::ListaEmpleadosContext::COMA() {
  return getTokens(EvaluacionFisherParser::COMA);
}

tree::TerminalNode* EvaluacionFisherParser::ListaEmpleadosContext::COMA(size_t i) {
  return getToken(EvaluacionFisherParser::COMA, i);
}


size_t EvaluacionFisherParser::ListaEmpleadosContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleListaEmpleados;
}

void EvaluacionFisherParser::ListaEmpleadosContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListaEmpleados(this);
}

void EvaluacionFisherParser::ListaEmpleadosContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListaEmpleados(this);
}

EvaluacionFisherParser::ListaEmpleadosContext* EvaluacionFisherParser::listaEmpleados() {
  ListaEmpleadosContext *_localctx = _tracker.createInstance<ListaEmpleadosContext>(_ctx, getState());
  enterRule(_localctx, 22, EvaluacionFisherParser::RuleListaEmpleados);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(EvaluacionFisherParser::IDENTIFICADOR);
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EvaluacionFisherParser::COMA) {
      setState(129);
      match(EvaluacionFisherParser::COMA);
      setState(130);
      match(EvaluacionFisherParser::IDENTIFICADOR);
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EvaluacionContext ------------------------------------------------------------------

EvaluacionFisherParser::EvaluacionContext::EvaluacionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EvaluacionFisherParser::CalculoFisherContext* EvaluacionFisherParser::EvaluacionContext::calculoFisher() {
  return getRuleContext<EvaluacionFisherParser::CalculoFisherContext>(0);
}

EvaluacionFisherParser::EvaluacionIndividualContext* EvaluacionFisherParser::EvaluacionContext::evaluacionIndividual() {
  return getRuleContext<EvaluacionFisherParser::EvaluacionIndividualContext>(0);
}

EvaluacionFisherParser::ComparacionGruposContext* EvaluacionFisherParser::EvaluacionContext::comparacionGrupos() {
  return getRuleContext<EvaluacionFisherParser::ComparacionGruposContext>(0);
}


size_t EvaluacionFisherParser::EvaluacionContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleEvaluacion;
}

void EvaluacionFisherParser::EvaluacionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvaluacion(this);
}

void EvaluacionFisherParser::EvaluacionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvaluacion(this);
}

EvaluacionFisherParser::EvaluacionContext* EvaluacionFisherParser::evaluacion() {
  EvaluacionContext *_localctx = _tracker.createInstance<EvaluacionContext>(_ctx, getState());
  enterRule(_localctx, 24, EvaluacionFisherParser::RuleEvaluacion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(139);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EvaluacionFisherParser::FISHER: {
        enterOuterAlt(_localctx, 1);
        setState(136);
        calculoFisher();
        break;
      }

      case EvaluacionFisherParser::EVALUAR: {
        enterOuterAlt(_localctx, 2);
        setState(137);
        evaluacionIndividual();
        break;
      }

      case EvaluacionFisherParser::COMPARAR: {
        enterOuterAlt(_localctx, 3);
        setState(138);
        comparacionGrupos();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CalculoFisherContext ------------------------------------------------------------------

EvaluacionFisherParser::CalculoFisherContext::CalculoFisherContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::CalculoFisherContext::FISHER() {
  return getToken(EvaluacionFisherParser::FISHER, 0);
}

tree::TerminalNode* EvaluacionFisherParser::CalculoFisherContext::LPAREN() {
  return getToken(EvaluacionFisherParser::LPAREN, 0);
}

tree::TerminalNode* EvaluacionFisherParser::CalculoFisherContext::GRUPO_A() {
  return getToken(EvaluacionFisherParser::GRUPO_A, 0);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::CalculoFisherContext::DOSPUNTOS() {
  return getTokens(EvaluacionFisherParser::DOSPUNTOS);
}

tree::TerminalNode* EvaluacionFisherParser::CalculoFisherContext::DOSPUNTOS(size_t i) {
  return getToken(EvaluacionFisherParser::DOSPUNTOS, i);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::CalculoFisherContext::IDENTIFICADOR() {
  return getTokens(EvaluacionFisherParser::IDENTIFICADOR);
}

tree::TerminalNode* EvaluacionFisherParser::CalculoFisherContext::IDENTIFICADOR(size_t i) {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, i);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::CalculoFisherContext::COMA() {
  return getTokens(EvaluacionFisherParser::COMA);
}

tree::TerminalNode* EvaluacionFisherParser::CalculoFisherContext::COMA(size_t i) {
  return getToken(EvaluacionFisherParser::COMA, i);
}

tree::TerminalNode* EvaluacionFisherParser::CalculoFisherContext::GRUPO_B() {
  return getToken(EvaluacionFisherParser::GRUPO_B, 0);
}

tree::TerminalNode* EvaluacionFisherParser::CalculoFisherContext::VARIABLES() {
  return getToken(EvaluacionFisherParser::VARIABLES, 0);
}

EvaluacionFisherParser::ListaVariablesContext* EvaluacionFisherParser::CalculoFisherContext::listaVariables() {
  return getRuleContext<EvaluacionFisherParser::ListaVariablesContext>(0);
}

tree::TerminalNode* EvaluacionFisherParser::CalculoFisherContext::RPAREN() {
  return getToken(EvaluacionFisherParser::RPAREN, 0);
}


size_t EvaluacionFisherParser::CalculoFisherContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleCalculoFisher;
}

void EvaluacionFisherParser::CalculoFisherContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalculoFisher(this);
}

void EvaluacionFisherParser::CalculoFisherContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalculoFisher(this);
}

EvaluacionFisherParser::CalculoFisherContext* EvaluacionFisherParser::calculoFisher() {
  CalculoFisherContext *_localctx = _tracker.createInstance<CalculoFisherContext>(_ctx, getState());
  enterRule(_localctx, 26, EvaluacionFisherParser::RuleCalculoFisher);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(EvaluacionFisherParser::FISHER);
    setState(142);
    match(EvaluacionFisherParser::LPAREN);
    setState(143);
    match(EvaluacionFisherParser::GRUPO_A);
    setState(144);
    match(EvaluacionFisherParser::DOSPUNTOS);
    setState(145);
    match(EvaluacionFisherParser::IDENTIFICADOR);
    setState(146);
    match(EvaluacionFisherParser::COMA);
    setState(147);
    match(EvaluacionFisherParser::GRUPO_B);
    setState(148);
    match(EvaluacionFisherParser::DOSPUNTOS);
    setState(149);
    match(EvaluacionFisherParser::IDENTIFICADOR);
    setState(150);
    match(EvaluacionFisherParser::COMA);
    setState(151);
    match(EvaluacionFisherParser::VARIABLES);
    setState(152);
    match(EvaluacionFisherParser::DOSPUNTOS);
    setState(153);
    listaVariables();
    setState(154);
    match(EvaluacionFisherParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListaVariablesContext ------------------------------------------------------------------

EvaluacionFisherParser::ListaVariablesContext::ListaVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EvaluacionFisherParser::VariableContext *> EvaluacionFisherParser::ListaVariablesContext::variable() {
  return getRuleContexts<EvaluacionFisherParser::VariableContext>();
}

EvaluacionFisherParser::VariableContext* EvaluacionFisherParser::ListaVariablesContext::variable(size_t i) {
  return getRuleContext<EvaluacionFisherParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::ListaVariablesContext::COMA() {
  return getTokens(EvaluacionFisherParser::COMA);
}

tree::TerminalNode* EvaluacionFisherParser::ListaVariablesContext::COMA(size_t i) {
  return getToken(EvaluacionFisherParser::COMA, i);
}


size_t EvaluacionFisherParser::ListaVariablesContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleListaVariables;
}

void EvaluacionFisherParser::ListaVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListaVariables(this);
}

void EvaluacionFisherParser::ListaVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListaVariables(this);
}

EvaluacionFisherParser::ListaVariablesContext* EvaluacionFisherParser::listaVariables() {
  ListaVariablesContext *_localctx = _tracker.createInstance<ListaVariablesContext>(_ctx, getState());
  enterRule(_localctx, 28, EvaluacionFisherParser::RuleListaVariables);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    variable();
    setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EvaluacionFisherParser::COMA) {
      setState(157);
      match(EvaluacionFisherParser::COMA);
      setState(158);
      variable();
      setState(163);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

EvaluacionFisherParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::VariableContext::PRODUCTIVIDAD() {
  return getToken(EvaluacionFisherParser::PRODUCTIVIDAD, 0);
}

tree::TerminalNode* EvaluacionFisherParser::VariableContext::CALIDAD_TRABAJO() {
  return getToken(EvaluacionFisherParser::CALIDAD_TRABAJO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::VariableContext::SEGURIDAD_LABORAL() {
  return getToken(EvaluacionFisherParser::SEGURIDAD_LABORAL, 0);
}

tree::TerminalNode* EvaluacionFisherParser::VariableContext::CUMPLIMIENTO_PLAZOS() {
  return getToken(EvaluacionFisherParser::CUMPLIMIENTO_PLAZOS, 0);
}

tree::TerminalNode* EvaluacionFisherParser::VariableContext::LIDERAZGO() {
  return getToken(EvaluacionFisherParser::LIDERAZGO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::VariableContext::TRABAJO_EQUIPO() {
  return getToken(EvaluacionFisherParser::TRABAJO_EQUIPO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::VariableContext::CONOCIMIENTO_TECNICO() {
  return getToken(EvaluacionFisherParser::CONOCIMIENTO_TECNICO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::VariableContext::ADAPTABILIDAD() {
  return getToken(EvaluacionFisherParser::ADAPTABILIDAD, 0);
}

tree::TerminalNode* EvaluacionFisherParser::VariableContext::ASISTENCIA() {
  return getToken(EvaluacionFisherParser::ASISTENCIA, 0);
}

tree::TerminalNode* EvaluacionFisherParser::VariableContext::IDENTIFICADOR() {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, 0);
}


size_t EvaluacionFisherParser::VariableContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleVariable;
}

void EvaluacionFisherParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void EvaluacionFisherParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

EvaluacionFisherParser::VariableContext* EvaluacionFisherParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 30, EvaluacionFisherParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    _la = _input->LA(1);
    if (!(((((_la - 38) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 38)) & 268435967) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EvaluacionIndividualContext ------------------------------------------------------------------

EvaluacionFisherParser::EvaluacionIndividualContext::EvaluacionIndividualContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::EvaluacionIndividualContext::EVALUAR() {
  return getToken(EvaluacionFisherParser::EVALUAR, 0);
}

tree::TerminalNode* EvaluacionFisherParser::EvaluacionIndividualContext::IDENTIFICADOR() {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, 0);
}

tree::TerminalNode* EvaluacionFisherParser::EvaluacionIndividualContext::LBRACE() {
  return getToken(EvaluacionFisherParser::LBRACE, 0);
}

tree::TerminalNode* EvaluacionFisherParser::EvaluacionIndividualContext::RBRACE() {
  return getToken(EvaluacionFisherParser::RBRACE, 0);
}

std::vector<EvaluacionFisherParser::CriterioValoracionContext *> EvaluacionFisherParser::EvaluacionIndividualContext::criterioValoracion() {
  return getRuleContexts<EvaluacionFisherParser::CriterioValoracionContext>();
}

EvaluacionFisherParser::CriterioValoracionContext* EvaluacionFisherParser::EvaluacionIndividualContext::criterioValoracion(size_t i) {
  return getRuleContext<EvaluacionFisherParser::CriterioValoracionContext>(i);
}


size_t EvaluacionFisherParser::EvaluacionIndividualContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleEvaluacionIndividual;
}

void EvaluacionFisherParser::EvaluacionIndividualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvaluacionIndividual(this);
}

void EvaluacionFisherParser::EvaluacionIndividualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvaluacionIndividual(this);
}

EvaluacionFisherParser::EvaluacionIndividualContext* EvaluacionFisherParser::evaluacionIndividual() {
  EvaluacionIndividualContext *_localctx = _tracker.createInstance<EvaluacionIndividualContext>(_ctx, getState());
  enterRule(_localctx, 32, EvaluacionFisherParser::RuleEvaluacionIndividual);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(EvaluacionFisherParser::EVALUAR);
    setState(167);
    match(EvaluacionFisherParser::IDENTIFICADOR);
    setState(168);
    match(EvaluacionFisherParser::LBRACE);
    setState(170); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(169);
      criterioValoracion();
      setState(172); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 38) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 38)) & 268435967) != 0));
    setState(174);
    match(EvaluacionFisherParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CriterioValoracionContext ------------------------------------------------------------------

EvaluacionFisherParser::CriterioValoracionContext::CriterioValoracionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EvaluacionFisherParser::VariableContext* EvaluacionFisherParser::CriterioValoracionContext::variable() {
  return getRuleContext<EvaluacionFisherParser::VariableContext>(0);
}

tree::TerminalNode* EvaluacionFisherParser::CriterioValoracionContext::DOSPUNTOS() {
  return getToken(EvaluacionFisherParser::DOSPUNTOS, 0);
}

EvaluacionFisherParser::ValoracionContext* EvaluacionFisherParser::CriterioValoracionContext::valoracion() {
  return getRuleContext<EvaluacionFisherParser::ValoracionContext>(0);
}


size_t EvaluacionFisherParser::CriterioValoracionContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleCriterioValoracion;
}

void EvaluacionFisherParser::CriterioValoracionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCriterioValoracion(this);
}

void EvaluacionFisherParser::CriterioValoracionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCriterioValoracion(this);
}

EvaluacionFisherParser::CriterioValoracionContext* EvaluacionFisherParser::criterioValoracion() {
  CriterioValoracionContext *_localctx = _tracker.createInstance<CriterioValoracionContext>(_ctx, getState());
  enterRule(_localctx, 34, EvaluacionFisherParser::RuleCriterioValoracion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    variable();
    setState(177);
    match(EvaluacionFisherParser::DOSPUNTOS);
    setState(178);
    valoracion();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValoracionContext ------------------------------------------------------------------

EvaluacionFisherParser::ValoracionContext::ValoracionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::ValoracionContext::NUMERO() {
  return getToken(EvaluacionFisherParser::NUMERO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ValoracionContext::ESCALA_LIKERT() {
  return getToken(EvaluacionFisherParser::ESCALA_LIKERT, 0);
}


size_t EvaluacionFisherParser::ValoracionContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleValoracion;
}

void EvaluacionFisherParser::ValoracionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValoracion(this);
}

void EvaluacionFisherParser::ValoracionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValoracion(this);
}

EvaluacionFisherParser::ValoracionContext* EvaluacionFisherParser::valoracion() {
  ValoracionContext *_localctx = _tracker.createInstance<ValoracionContext>(_ctx, getState());
  enterRule(_localctx, 36, EvaluacionFisherParser::RuleValoracion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    _la = _input->LA(1);
    if (!(_la == EvaluacionFisherParser::ESCALA_LIKERT

    || _la == EvaluacionFisherParser::NUMERO)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparacionGruposContext ------------------------------------------------------------------

EvaluacionFisherParser::ComparacionGruposContext::ComparacionGruposContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::ComparacionGruposContext::COMPARAR() {
  return getToken(EvaluacionFisherParser::COMPARAR, 0);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::ComparacionGruposContext::GRUPO() {
  return getTokens(EvaluacionFisherParser::GRUPO);
}

tree::TerminalNode* EvaluacionFisherParser::ComparacionGruposContext::GRUPO(size_t i) {
  return getToken(EvaluacionFisherParser::GRUPO, i);
}

std::vector<tree::TerminalNode *> EvaluacionFisherParser::ComparacionGruposContext::IDENTIFICADOR() {
  return getTokens(EvaluacionFisherParser::IDENTIFICADOR);
}

tree::TerminalNode* EvaluacionFisherParser::ComparacionGruposContext::IDENTIFICADOR(size_t i) {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, i);
}

tree::TerminalNode* EvaluacionFisherParser::ComparacionGruposContext::CON() {
  return getToken(EvaluacionFisherParser::CON, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ComparacionGruposContext::USANDO() {
  return getToken(EvaluacionFisherParser::USANDO, 0);
}

EvaluacionFisherParser::ListaVariablesContext* EvaluacionFisherParser::ComparacionGruposContext::listaVariables() {
  return getRuleContext<EvaluacionFisherParser::ListaVariablesContext>(0);
}


size_t EvaluacionFisherParser::ComparacionGruposContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleComparacionGrupos;
}

void EvaluacionFisherParser::ComparacionGruposContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparacionGrupos(this);
}

void EvaluacionFisherParser::ComparacionGruposContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparacionGrupos(this);
}

EvaluacionFisherParser::ComparacionGruposContext* EvaluacionFisherParser::comparacionGrupos() {
  ComparacionGruposContext *_localctx = _tracker.createInstance<ComparacionGruposContext>(_ctx, getState());
  enterRule(_localctx, 38, EvaluacionFisherParser::RuleComparacionGrupos);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(EvaluacionFisherParser::COMPARAR);
    setState(183);
    match(EvaluacionFisherParser::GRUPO);
    setState(184);
    match(EvaluacionFisherParser::IDENTIFICADOR);
    setState(185);
    match(EvaluacionFisherParser::CON);
    setState(186);
    match(EvaluacionFisherParser::GRUPO);
    setState(187);
    match(EvaluacionFisherParser::IDENTIFICADOR);
    setState(188);
    match(EvaluacionFisherParser::USANDO);
    setState(189);
    listaVariables();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConsultaContext ------------------------------------------------------------------

EvaluacionFisherParser::ConsultaContext::ConsultaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EvaluacionFisherParser::ConsultaEmpleadoContext* EvaluacionFisherParser::ConsultaContext::consultaEmpleado() {
  return getRuleContext<EvaluacionFisherParser::ConsultaEmpleadoContext>(0);
}

EvaluacionFisherParser::ConsultaRankingContext* EvaluacionFisherParser::ConsultaContext::consultaRanking() {
  return getRuleContext<EvaluacionFisherParser::ConsultaRankingContext>(0);
}

EvaluacionFisherParser::ConsultaEstadisticasContext* EvaluacionFisherParser::ConsultaContext::consultaEstadisticas() {
  return getRuleContext<EvaluacionFisherParser::ConsultaEstadisticasContext>(0);
}

EvaluacionFisherParser::ConsultaPrediccionContext* EvaluacionFisherParser::ConsultaContext::consultaPrediccion() {
  return getRuleContext<EvaluacionFisherParser::ConsultaPrediccionContext>(0);
}


size_t EvaluacionFisherParser::ConsultaContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleConsulta;
}

void EvaluacionFisherParser::ConsultaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConsulta(this);
}

void EvaluacionFisherParser::ConsultaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConsulta(this);
}

EvaluacionFisherParser::ConsultaContext* EvaluacionFisherParser::consulta() {
  ConsultaContext *_localctx = _tracker.createInstance<ConsultaContext>(_ctx, getState());
  enterRule(_localctx, 40, EvaluacionFisherParser::RuleConsulta);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(195);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EvaluacionFisherParser::CONSULTAR: {
        enterOuterAlt(_localctx, 1);
        setState(191);
        consultaEmpleado();
        break;
      }

      case EvaluacionFisherParser::RANKING: {
        enterOuterAlt(_localctx, 2);
        setState(192);
        consultaRanking();
        break;
      }

      case EvaluacionFisherParser::ESTADISTICAS: {
        enterOuterAlt(_localctx, 3);
        setState(193);
        consultaEstadisticas();
        break;
      }

      case EvaluacionFisherParser::PREDECIR: {
        enterOuterAlt(_localctx, 4);
        setState(194);
        consultaPrediccion();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConsultaEmpleadoContext ------------------------------------------------------------------

EvaluacionFisherParser::ConsultaEmpleadoContext::ConsultaEmpleadoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaEmpleadoContext::CONSULTAR() {
  return getToken(EvaluacionFisherParser::CONSULTAR, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaEmpleadoContext::EMPLEADO() {
  return getToken(EvaluacionFisherParser::EMPLEADO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaEmpleadoContext::IDENTIFICADOR() {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, 0);
}


size_t EvaluacionFisherParser::ConsultaEmpleadoContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleConsultaEmpleado;
}

void EvaluacionFisherParser::ConsultaEmpleadoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConsultaEmpleado(this);
}

void EvaluacionFisherParser::ConsultaEmpleadoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConsultaEmpleado(this);
}

EvaluacionFisherParser::ConsultaEmpleadoContext* EvaluacionFisherParser::consultaEmpleado() {
  ConsultaEmpleadoContext *_localctx = _tracker.createInstance<ConsultaEmpleadoContext>(_ctx, getState());
  enterRule(_localctx, 42, EvaluacionFisherParser::RuleConsultaEmpleado);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(EvaluacionFisherParser::CONSULTAR);
    setState(198);
    match(EvaluacionFisherParser::EMPLEADO);
    setState(199);
    match(EvaluacionFisherParser::IDENTIFICADOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConsultaRankingContext ------------------------------------------------------------------

EvaluacionFisherParser::ConsultaRankingContext::ConsultaRankingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaRankingContext::RANKING() {
  return getToken(EvaluacionFisherParser::RANKING, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaRankingContext::POR() {
  return getToken(EvaluacionFisherParser::POR, 0);
}

EvaluacionFisherParser::VariableContext* EvaluacionFisherParser::ConsultaRankingContext::variable() {
  return getRuleContext<EvaluacionFisherParser::VariableContext>(0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaRankingContext::LIMITE() {
  return getToken(EvaluacionFisherParser::LIMITE, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaRankingContext::NUMERO() {
  return getToken(EvaluacionFisherParser::NUMERO, 0);
}


size_t EvaluacionFisherParser::ConsultaRankingContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleConsultaRanking;
}

void EvaluacionFisherParser::ConsultaRankingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConsultaRanking(this);
}

void EvaluacionFisherParser::ConsultaRankingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConsultaRanking(this);
}

EvaluacionFisherParser::ConsultaRankingContext* EvaluacionFisherParser::consultaRanking() {
  ConsultaRankingContext *_localctx = _tracker.createInstance<ConsultaRankingContext>(_ctx, getState());
  enterRule(_localctx, 44, EvaluacionFisherParser::RuleConsultaRanking);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(EvaluacionFisherParser::RANKING);
    setState(204);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EvaluacionFisherParser::POR) {
      setState(202);
      match(EvaluacionFisherParser::POR);
      setState(203);
      variable();
    }
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EvaluacionFisherParser::LIMITE) {
      setState(206);
      match(EvaluacionFisherParser::LIMITE);
      setState(207);
      match(EvaluacionFisherParser::NUMERO);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConsultaEstadisticasContext ------------------------------------------------------------------

EvaluacionFisherParser::ConsultaEstadisticasContext::ConsultaEstadisticasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaEstadisticasContext::ESTADISTICAS() {
  return getToken(EvaluacionFisherParser::ESTADISTICAS, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaEstadisticasContext::DE() {
  return getToken(EvaluacionFisherParser::DE, 0);
}

EvaluacionFisherParser::VariableContext* EvaluacionFisherParser::ConsultaEstadisticasContext::variable() {
  return getRuleContext<EvaluacionFisherParser::VariableContext>(0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaEstadisticasContext::PARA() {
  return getToken(EvaluacionFisherParser::PARA, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaEstadisticasContext::GRUPO() {
  return getToken(EvaluacionFisherParser::GRUPO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaEstadisticasContext::IDENTIFICADOR() {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, 0);
}


size_t EvaluacionFisherParser::ConsultaEstadisticasContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleConsultaEstadisticas;
}

void EvaluacionFisherParser::ConsultaEstadisticasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConsultaEstadisticas(this);
}

void EvaluacionFisherParser::ConsultaEstadisticasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConsultaEstadisticas(this);
}

EvaluacionFisherParser::ConsultaEstadisticasContext* EvaluacionFisherParser::consultaEstadisticas() {
  ConsultaEstadisticasContext *_localctx = _tracker.createInstance<ConsultaEstadisticasContext>(_ctx, getState());
  enterRule(_localctx, 46, EvaluacionFisherParser::RuleConsultaEstadisticas);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    match(EvaluacionFisherParser::ESTADISTICAS);
    setState(213);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EvaluacionFisherParser::DE) {
      setState(211);
      match(EvaluacionFisherParser::DE);
      setState(212);
      variable();
    }
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EvaluacionFisherParser::PARA) {
      setState(215);
      match(EvaluacionFisherParser::PARA);
      setState(216);
      match(EvaluacionFisherParser::GRUPO);
      setState(217);
      match(EvaluacionFisherParser::IDENTIFICADOR);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConsultaPrediccionContext ------------------------------------------------------------------

EvaluacionFisherParser::ConsultaPrediccionContext::ConsultaPrediccionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaPrediccionContext::PREDECIR() {
  return getToken(EvaluacionFisherParser::PREDECIR, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaPrediccionContext::RENDIMIENTO() {
  return getToken(EvaluacionFisherParser::RENDIMIENTO, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaPrediccionContext::DE() {
  return getToken(EvaluacionFisherParser::DE, 0);
}

tree::TerminalNode* EvaluacionFisherParser::ConsultaPrediccionContext::IDENTIFICADOR() {
  return getToken(EvaluacionFisherParser::IDENTIFICADOR, 0);
}


size_t EvaluacionFisherParser::ConsultaPrediccionContext::getRuleIndex() const {
  return EvaluacionFisherParser::RuleConsultaPrediccion;
}

void EvaluacionFisherParser::ConsultaPrediccionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConsultaPrediccion(this);
}

void EvaluacionFisherParser::ConsultaPrediccionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EvaluacionFisherListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConsultaPrediccion(this);
}

EvaluacionFisherParser::ConsultaPrediccionContext* EvaluacionFisherParser::consultaPrediccion() {
  ConsultaPrediccionContext *_localctx = _tracker.createInstance<ConsultaPrediccionContext>(_ctx, getState());
  enterRule(_localctx, 48, EvaluacionFisherParser::RuleConsultaPrediccion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(EvaluacionFisherParser::PREDECIR);
    setState(221);
    match(EvaluacionFisherParser::RENDIMIENTO);
    setState(222);
    match(EvaluacionFisherParser::DE);
    setState(223);
    match(EvaluacionFisherParser::IDENTIFICADOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void EvaluacionFisherParser::initialize() {
  ::antlr4::internal::call_once(evaluacionfisherParserOnceFlag, evaluacionfisherParserInitialize);
}
