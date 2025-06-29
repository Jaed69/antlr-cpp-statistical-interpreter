#pragma once
#include "SymbolTable.h"

// Incluimos los headers que ANTLR generará
#include "EmployeeEvalBaseVisitor.h"

class EvalVisitor : public EmployeeEvalBaseVisitor {
public:
    // El método visit retorna nuestra variante SymbolValue
    antlrcpp::Any visitStatement(EmployeeEvalParser::StatementContext *ctx) override;
    antlrcpp::Any visitDeclaration(EmployeeEvalParser::DeclarationContext *ctx) override;
    antlrcpp::Any visitNumberExpr(EmployeeEvalParser::NumberExprContext *ctx) override;
    antlrcpp::Any visitStringExpr(EmployeeEvalParser::StringExprContext *ctx) override;
    antlrcpp::Any visitUnaryExpr(EmployeeEvalParser::UnaryExprContext *ctx) override;
    antlrcpp::Any visitIdExpr(EmployeeEvalParser::IdExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(EmployeeEvalParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(EmployeeEvalParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitParensExpr(EmployeeEvalParser::ParensExprContext *ctx) override;
    antlrcpp::Any visitFuncCallExpr(EmployeeEvalParser::FuncCallExprContext *ctx) override;

    // Método para imprimir la tabla de símbolos al final
    void printSymbolTable();

private:
    SymbolTable table;
    
    // Función auxiliar para convertir SymbolValue a double
    double valueToDouble(const SymbolValue& val);
};