#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <cmath>
#include "EvalVisitor.h"

// --- Implementación de SymbolTable ---
void SymbolTable::declare(const std::string& name, SymbolValue value) {
    symbols[name] = value;
}

SymbolValue SymbolTable::get(const std::string& name) {
    if (symbols.find(name) == symbols.end()) {
        throw std::runtime_error("Error: Variable no definida '" + name + "'");
    }
    return symbols.at(name);
}

void SymbolTable::print() {
    for (const auto& [name, value] : symbols) {
        std::cout << "- " << name << ": ";
        std::visit([](const auto& val){ std::cout << val; }, value);
        std::cout << std::endl;
    }
}

// --- Implementación de EvalVisitor ---
antlrcpp::Any EvalVisitor::visitDeclaration(EmployeeEvalParser::DeclarationContext *ctx) {
    std::string var_name = ctx->ID()->getText();
    SymbolValue value = std::any_cast<SymbolValue>(visit(ctx->expr()));
    table.declare(var_name, value);
    return value;
}

antlrcpp::Any EvalVisitor::visitNumberExpr(EmployeeEvalParser::NumberExprContext *ctx) {
    std::string text = ctx->getText();
    if (text.find('.') != std::string::npos) {
        return SymbolValue{std::stod(text)};
    }
    return SymbolValue{std::stoi(text)};
}

antlrcpp::Any EvalVisitor::visitIdExpr(EmployeeEvalParser::IdExprContext *ctx) {
    return table.get(ctx->getText());
}

antlrcpp::Any EvalVisitor::visitStringExpr(EmployeeEvalParser::StringExprContext *ctx) {
    std::string text = ctx->getText();
    // Remover las comillas del string
    if (text.size() >= 2 && text[0] == '"' && text.back() == '"') {
        text = text.substr(1, text.size() - 2);
    }
    return SymbolValue{text};
}

antlrcpp::Any EvalVisitor::visitUnaryExpr(EmployeeEvalParser::UnaryExprContext *ctx) {
    SymbolValue operand = std::any_cast<SymbolValue>(visit(ctx->expr()));
    double val = valueToDouble(operand);
    
    if (ctx->op->getText() == "+") {
        return SymbolValue{val};
    } else if (ctx->op->getText() == "-") {
        return SymbolValue{-val};
    }
    return SymbolValue{val};
}

// Función auxiliar para convertir SymbolValue a double
double EvalVisitor::valueToDouble(const SymbolValue& val) {
    return std::visit([](const auto& v) -> double {
        if constexpr (std::is_same_v<std::decay_t<decltype(v)>, int>) {
            return static_cast<double>(v);
        } else if constexpr (std::is_same_v<std::decay_t<decltype(v)>, double>) {
            return v;
        } else if constexpr (std::is_same_v<std::decay_t<decltype(v)>, std::string>) {
            try {
                return std::stod(v);
            } catch (...) {
                throw std::runtime_error("No se puede convertir string '" + v + "' a número");
            }
        }
        return 0.0;
    }, val);
}

antlrcpp::Any EvalVisitor::visitMulDivExpr(EmployeeEvalParser::MulDivExprContext *ctx) {
    SymbolValue left = std::any_cast<SymbolValue>(visit(ctx->expr(0)));
    SymbolValue right = std::any_cast<SymbolValue>(visit(ctx->expr(1)));
    double l = valueToDouble(left);
    double r = valueToDouble(right);
    
    if (ctx->op->getText() == "*") return SymbolValue{l * r};
    return SymbolValue{l / r};
}

antlrcpp::Any EvalVisitor::visitAddSubExpr(EmployeeEvalParser::AddSubExprContext *ctx) {
    SymbolValue left = std::any_cast<SymbolValue>(visit(ctx->expr(0)));
    SymbolValue right = std::any_cast<SymbolValue>(visit(ctx->expr(1)));
    double l = valueToDouble(left);
    double r = valueToDouble(right);
    
    if (ctx->op->getText() == "+") return SymbolValue{l + r};
    return SymbolValue{l - r};
}

antlrcpp::Any EvalVisitor::visitParensExpr(EmployeeEvalParser::ParensExprContext *ctx) {
    return visit(ctx->expr());
}

antlrcpp::Any EvalVisitor::visitFuncCallExpr(EmployeeEvalParser::FuncCallExprContext *ctx) {
    std::string func_name = ctx->funcCall()->ID()->getText();
    std::vector<double> args;
    if (ctx->funcCall()->exprList()) {
        for (auto expr : ctx->funcCall()->exprList()->expr()) {
            SymbolValue val = std::any_cast<SymbolValue>(visit(expr));
            args.push_back(valueToDouble(val));
        }
    }

    if (func_name == "mean") {
        double sum = std::accumulate(args.begin(), args.end(), 0.0);
        return SymbolValue{sum / args.size()};
    }
    if (func_name == "variance") {
        double sum = std::accumulate(args.begin(), args.end(), 0.0);
        double mean = sum / args.size();
        double sq_sum = std::accumulate(args.begin(), args.end(), 0.0, [mean](double acc, double val){
            return acc + (val - mean) * (val - mean);
        });
        return SymbolValue{sq_sum / args.size()};
    }
     if (func_name == "fisher") {
        double n = args.size();
        if (n == 0) return SymbolValue{0.0};
        double sum = std::accumulate(args.begin(), args.end(), 0.0);
        double mean = sum / n;
        double stddev_sq_sum = std::accumulate(args.begin(), args.end(), 0.0, [mean](double acc, double val){
            return acc + (val - mean) * (val - mean);
        });
        double stddev = std::sqrt(stddev_sq_sum / n);
        if(stddev == 0) return SymbolValue{0.0};
        
        double skew_sum = std::accumulate(args.begin(), args.end(), 0.0, [mean](double acc, double val){
            return acc + std::pow(val - mean, 3);
        });
        return SymbolValue{skew_sum / (n * std::pow(stddev, 3))};
    }
    throw std::runtime_error("Función desconocida: " + func_name);
}

// Método para manejar expresiones independientes
antlrcpp::Any EvalVisitor::visitStatement(EmployeeEvalParser::StatementContext *ctx) {
    if (ctx->declaration()) {
        return visit(ctx->declaration());
    } else if (ctx->expr()) {
        return visit(ctx->expr());
    } else if (ctx->COMMENT()) {
        // Ignorar comentarios
        return {};
    }
    return {};
}

void EvalVisitor::printSymbolTable() {
    std::cout << "\n--- Tabla de Símbolos Final ---" << std::endl;
    table.print();
}