
// Generated from src/grammar/EvaluacionFisher.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "EvaluacionFisherParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by EvaluacionFisherParser.
 */
class  EvaluacionFisherListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSistema(EvaluacionFisherParser::SistemaContext *ctx) = 0;
  virtual void exitSistema(EvaluacionFisherParser::SistemaContext *ctx) = 0;

  virtual void enterDeclaracion(EvaluacionFisherParser::DeclaracionContext *ctx) = 0;
  virtual void exitDeclaracion(EvaluacionFisherParser::DeclaracionContext *ctx) = 0;

  virtual void enterDeclaracionEmpleado(EvaluacionFisherParser::DeclaracionEmpleadoContext *ctx) = 0;
  virtual void exitDeclaracionEmpleado(EvaluacionFisherParser::DeclaracionEmpleadoContext *ctx) = 0;

  virtual void enterAtributoEmpleado(EvaluacionFisherParser::AtributoEmpleadoContext *ctx) = 0;
  virtual void exitAtributoEmpleado(EvaluacionFisherParser::AtributoEmpleadoContext *ctx) = 0;

  virtual void enterTipoCargo(EvaluacionFisherParser::TipoCargoContext *ctx) = 0;
  virtual void exitTipoCargo(EvaluacionFisherParser::TipoCargoContext *ctx) = 0;

  virtual void enterAreaConstructora(EvaluacionFisherParser::AreaConstructoraContext *ctx) = 0;
  virtual void exitAreaConstructora(EvaluacionFisherParser::AreaConstructoraContext *ctx) = 0;

  virtual void enterNivelRendimiento(EvaluacionFisherParser::NivelRendimientoContext *ctx) = 0;
  virtual void exitNivelRendimiento(EvaluacionFisherParser::NivelRendimientoContext *ctx) = 0;

  virtual void enterDeclaracionCriterio(EvaluacionFisherParser::DeclaracionCriterioContext *ctx) = 0;
  virtual void exitDeclaracionCriterio(EvaluacionFisherParser::DeclaracionCriterioContext *ctx) = 0;

  virtual void enterTipoCriterio(EvaluacionFisherParser::TipoCriterioContext *ctx) = 0;
  virtual void exitTipoCriterio(EvaluacionFisherParser::TipoCriterioContext *ctx) = 0;

  virtual void enterMetricaCriterio(EvaluacionFisherParser::MetricaCriterioContext *ctx) = 0;
  virtual void exitMetricaCriterio(EvaluacionFisherParser::MetricaCriterioContext *ctx) = 0;

  virtual void enterDeclaracionGrupo(EvaluacionFisherParser::DeclaracionGrupoContext *ctx) = 0;
  virtual void exitDeclaracionGrupo(EvaluacionFisherParser::DeclaracionGrupoContext *ctx) = 0;

  virtual void enterListaEmpleados(EvaluacionFisherParser::ListaEmpleadosContext *ctx) = 0;
  virtual void exitListaEmpleados(EvaluacionFisherParser::ListaEmpleadosContext *ctx) = 0;

  virtual void enterEvaluacion(EvaluacionFisherParser::EvaluacionContext *ctx) = 0;
  virtual void exitEvaluacion(EvaluacionFisherParser::EvaluacionContext *ctx) = 0;

  virtual void enterCalculoFisher(EvaluacionFisherParser::CalculoFisherContext *ctx) = 0;
  virtual void exitCalculoFisher(EvaluacionFisherParser::CalculoFisherContext *ctx) = 0;

  virtual void enterListaVariables(EvaluacionFisherParser::ListaVariablesContext *ctx) = 0;
  virtual void exitListaVariables(EvaluacionFisherParser::ListaVariablesContext *ctx) = 0;

  virtual void enterVariable(EvaluacionFisherParser::VariableContext *ctx) = 0;
  virtual void exitVariable(EvaluacionFisherParser::VariableContext *ctx) = 0;

  virtual void enterEvaluacionIndividual(EvaluacionFisherParser::EvaluacionIndividualContext *ctx) = 0;
  virtual void exitEvaluacionIndividual(EvaluacionFisherParser::EvaluacionIndividualContext *ctx) = 0;

  virtual void enterCriterioValoracion(EvaluacionFisherParser::CriterioValoracionContext *ctx) = 0;
  virtual void exitCriterioValoracion(EvaluacionFisherParser::CriterioValoracionContext *ctx) = 0;

  virtual void enterValoracion(EvaluacionFisherParser::ValoracionContext *ctx) = 0;
  virtual void exitValoracion(EvaluacionFisherParser::ValoracionContext *ctx) = 0;

  virtual void enterComparacionGrupos(EvaluacionFisherParser::ComparacionGruposContext *ctx) = 0;
  virtual void exitComparacionGrupos(EvaluacionFisherParser::ComparacionGruposContext *ctx) = 0;

  virtual void enterConsulta(EvaluacionFisherParser::ConsultaContext *ctx) = 0;
  virtual void exitConsulta(EvaluacionFisherParser::ConsultaContext *ctx) = 0;

  virtual void enterConsultaEmpleado(EvaluacionFisherParser::ConsultaEmpleadoContext *ctx) = 0;
  virtual void exitConsultaEmpleado(EvaluacionFisherParser::ConsultaEmpleadoContext *ctx) = 0;

  virtual void enterConsultaRanking(EvaluacionFisherParser::ConsultaRankingContext *ctx) = 0;
  virtual void exitConsultaRanking(EvaluacionFisherParser::ConsultaRankingContext *ctx) = 0;

  virtual void enterConsultaEstadisticas(EvaluacionFisherParser::ConsultaEstadisticasContext *ctx) = 0;
  virtual void exitConsultaEstadisticas(EvaluacionFisherParser::ConsultaEstadisticasContext *ctx) = 0;

  virtual void enterConsultaPrediccion(EvaluacionFisherParser::ConsultaPrediccionContext *ctx) = 0;
  virtual void exitConsultaPrediccion(EvaluacionFisherParser::ConsultaPrediccionContext *ctx) = 0;


};

