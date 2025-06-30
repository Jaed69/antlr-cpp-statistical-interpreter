
// Generated from src/grammar/EvaluacionFisher.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "EvaluacionFisherListener.h"


/**
 * This class provides an empty implementation of EvaluacionFisherListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  EvaluacionFisherBaseListener : public EvaluacionFisherListener {
public:

  virtual void enterSistema(EvaluacionFisherParser::SistemaContext * /*ctx*/) override { }
  virtual void exitSistema(EvaluacionFisherParser::SistemaContext * /*ctx*/) override { }

  virtual void enterDeclaracion(EvaluacionFisherParser::DeclaracionContext * /*ctx*/) override { }
  virtual void exitDeclaracion(EvaluacionFisherParser::DeclaracionContext * /*ctx*/) override { }

  virtual void enterDeclaracionEmpleado(EvaluacionFisherParser::DeclaracionEmpleadoContext * /*ctx*/) override { }
  virtual void exitDeclaracionEmpleado(EvaluacionFisherParser::DeclaracionEmpleadoContext * /*ctx*/) override { }

  virtual void enterAtributoEmpleado(EvaluacionFisherParser::AtributoEmpleadoContext * /*ctx*/) override { }
  virtual void exitAtributoEmpleado(EvaluacionFisherParser::AtributoEmpleadoContext * /*ctx*/) override { }

  virtual void enterTipoCargo(EvaluacionFisherParser::TipoCargoContext * /*ctx*/) override { }
  virtual void exitTipoCargo(EvaluacionFisherParser::TipoCargoContext * /*ctx*/) override { }

  virtual void enterAreaConstructora(EvaluacionFisherParser::AreaConstructoraContext * /*ctx*/) override { }
  virtual void exitAreaConstructora(EvaluacionFisherParser::AreaConstructoraContext * /*ctx*/) override { }

  virtual void enterNivelRendimiento(EvaluacionFisherParser::NivelRendimientoContext * /*ctx*/) override { }
  virtual void exitNivelRendimiento(EvaluacionFisherParser::NivelRendimientoContext * /*ctx*/) override { }

  virtual void enterDeclaracionCriterio(EvaluacionFisherParser::DeclaracionCriterioContext * /*ctx*/) override { }
  virtual void exitDeclaracionCriterio(EvaluacionFisherParser::DeclaracionCriterioContext * /*ctx*/) override { }

  virtual void enterTipoCriterio(EvaluacionFisherParser::TipoCriterioContext * /*ctx*/) override { }
  virtual void exitTipoCriterio(EvaluacionFisherParser::TipoCriterioContext * /*ctx*/) override { }

  virtual void enterMetricaCriterio(EvaluacionFisherParser::MetricaCriterioContext * /*ctx*/) override { }
  virtual void exitMetricaCriterio(EvaluacionFisherParser::MetricaCriterioContext * /*ctx*/) override { }

  virtual void enterDeclaracionGrupo(EvaluacionFisherParser::DeclaracionGrupoContext * /*ctx*/) override { }
  virtual void exitDeclaracionGrupo(EvaluacionFisherParser::DeclaracionGrupoContext * /*ctx*/) override { }

  virtual void enterListaEmpleados(EvaluacionFisherParser::ListaEmpleadosContext * /*ctx*/) override { }
  virtual void exitListaEmpleados(EvaluacionFisherParser::ListaEmpleadosContext * /*ctx*/) override { }

  virtual void enterEvaluacion(EvaluacionFisherParser::EvaluacionContext * /*ctx*/) override { }
  virtual void exitEvaluacion(EvaluacionFisherParser::EvaluacionContext * /*ctx*/) override { }

  virtual void enterCalculoFisher(EvaluacionFisherParser::CalculoFisherContext * /*ctx*/) override { }
  virtual void exitCalculoFisher(EvaluacionFisherParser::CalculoFisherContext * /*ctx*/) override { }

  virtual void enterListaVariables(EvaluacionFisherParser::ListaVariablesContext * /*ctx*/) override { }
  virtual void exitListaVariables(EvaluacionFisherParser::ListaVariablesContext * /*ctx*/) override { }

  virtual void enterVariable(EvaluacionFisherParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(EvaluacionFisherParser::VariableContext * /*ctx*/) override { }

  virtual void enterEvaluacionIndividual(EvaluacionFisherParser::EvaluacionIndividualContext * /*ctx*/) override { }
  virtual void exitEvaluacionIndividual(EvaluacionFisherParser::EvaluacionIndividualContext * /*ctx*/) override { }

  virtual void enterCriterioValoracion(EvaluacionFisherParser::CriterioValoracionContext * /*ctx*/) override { }
  virtual void exitCriterioValoracion(EvaluacionFisherParser::CriterioValoracionContext * /*ctx*/) override { }

  virtual void enterValoracion(EvaluacionFisherParser::ValoracionContext * /*ctx*/) override { }
  virtual void exitValoracion(EvaluacionFisherParser::ValoracionContext * /*ctx*/) override { }

  virtual void enterComparacionGrupos(EvaluacionFisherParser::ComparacionGruposContext * /*ctx*/) override { }
  virtual void exitComparacionGrupos(EvaluacionFisherParser::ComparacionGruposContext * /*ctx*/) override { }

  virtual void enterConsulta(EvaluacionFisherParser::ConsultaContext * /*ctx*/) override { }
  virtual void exitConsulta(EvaluacionFisherParser::ConsultaContext * /*ctx*/) override { }

  virtual void enterConsultaEmpleado(EvaluacionFisherParser::ConsultaEmpleadoContext * /*ctx*/) override { }
  virtual void exitConsultaEmpleado(EvaluacionFisherParser::ConsultaEmpleadoContext * /*ctx*/) override { }

  virtual void enterConsultaRanking(EvaluacionFisherParser::ConsultaRankingContext * /*ctx*/) override { }
  virtual void exitConsultaRanking(EvaluacionFisherParser::ConsultaRankingContext * /*ctx*/) override { }

  virtual void enterConsultaEstadisticas(EvaluacionFisherParser::ConsultaEstadisticasContext * /*ctx*/) override { }
  virtual void exitConsultaEstadisticas(EvaluacionFisherParser::ConsultaEstadisticasContext * /*ctx*/) override { }

  virtual void enterConsultaPrediccion(EvaluacionFisherParser::ConsultaPrediccionContext * /*ctx*/) override { }
  virtual void exitConsultaPrediccion(EvaluacionFisherParser::ConsultaPrediccionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

