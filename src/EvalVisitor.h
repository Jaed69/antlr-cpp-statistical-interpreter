#pragma once
#include "SistemaEvaluacion.h"

// Incluimos los headers que ANTLR generará
#include "EvaluacionFisherBaseVisitor.h"

class EvaluacionVisitor : public EvaluacionFisherBaseVisitor {
public:
    EvaluacionVisitor();
    
    // Visitor methods para la nueva gramática
    antlrcpp::Any visitSistema(EvaluacionFisherParser::SistemaContext *ctx) override;
    
    // Declaraciones
    antlrcpp::Any visitDeclaracionEmpleado(EvaluacionFisherParser::DeclaracionEmpleadoContext *ctx) override;
    antlrcpp::Any visitDeclaracionCriterio(EvaluacionFisherParser::DeclaracionCriterioContext *ctx) override;
    antlrcpp::Any visitDeclaracionGrupo(EvaluacionFisherParser::DeclaracionGrupoContext *ctx) override;
    
    // Atributos de empleado
    antlrcpp::Any visitAtributoEmpleado(EvaluacionFisherParser::AtributoEmpleadoContext *ctx) override;
    
    // Evaluaciones
    antlrcpp::Any visitCalculoFisher(EvaluacionFisherParser::CalculoFisherContext *ctx) override;
    antlrcpp::Any visitEvaluacionIndividual(EvaluacionFisherParser::EvaluacionIndividualContext *ctx) override;
    antlrcpp::Any visitComparacionGrupos(EvaluacionFisherParser::ComparacionGruposContext *ctx) override;
    
    // Consultas
    antlrcpp::Any visitConsultaEmpleado(EvaluacionFisherParser::ConsultaEmpleadoContext *ctx) override;
    antlrcpp::Any visitConsultaRanking(EvaluacionFisherParser::ConsultaRankingContext *ctx) override;
    antlrcpp::Any visitConsultaEstadisticas(EvaluacionFisherParser::ConsultaEstadisticasContext *ctx) override;
    antlrcpp::Any visitConsultaPrediccion(EvaluacionFisherParser::ConsultaPrediccionContext *ctx) override;
    
    // Método para obtener el sistema de evaluación
    SistemaEvaluacionFisher& getSistema() { return sistema; }
    
    void imprimirReporte();

private:
    SistemaEvaluacionFisher sistema;
    
    // Funciones auxiliares para conversión de tipos
    TipoCargo stringATipoCargo(const std::string& cargo);
    AreaConstructora stringAAreaConstructora(const std::string& area);
    NivelRendimiento stringANivelRendimiento(const std::string& nivel);
    TipoCriterio stringATipoCriterio(const std::string& tipo);
    MetricaCriterio stringAMetricaCriterio(const std::string& metrica);
    EscalaLikert stringAEscalaLikert(const std::string& escala);
};