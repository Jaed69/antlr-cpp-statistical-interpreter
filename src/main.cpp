#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"

// Headers generados (CMake se encargará de encontrarlos)
#include "EmployeeEvalLexer.h"
#include "EmployeeEvalParser.h"

// Nuestro Visitor
#include "EvalVisitor.h"

using namespace antlr4;

int main() {
    std::ifstream stream;
    stream.open("../src/input.txt");
    if (!stream) {
        std::cerr << "Error abriendo el archivo input.txt" << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    EmployeeEvalLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    EmployeeEvalParser parser(&tokens);

    tree::ParseTree* tree = parser.program();

    std::cout << "--- Ejecutando el Intérprete C++ ---" << std::endl;
    EvalVisitor visitor;

    std::cout << "--- Ejecutando el Intérprete C++ ---" << std::endl;

    // Recorremos cada statement
    for (auto stmt_ctx : tree->children) {
        // Ignoramos el token EOF al final
        if (dynamic_cast<tree::TerminalNode*>(stmt_ctx)) continue;
        
        auto* statement = dynamic_cast<EmployeeEvalParser::StatementContext*>(stmt_ctx);
        if (!statement) continue;
        
        auto result_any = visitor.visit(statement);
        
        // Si es una expresión (no una declaración), mostramos el resultado
        if (statement->expr() && !statement->declaration()) {
            if (result_any.has_value()) {
                try {
                    SymbolValue result_val = std::any_cast<SymbolValue>(result_any);
                    std::cout << "Resultado: ";
                    std::visit([](const auto& val){ std::cout << val; }, result_val);
                    std::cout << std::endl;
                } catch (const std::bad_any_cast& e) {
                    std::cout << "Error al convertir resultado" << std::endl;
                }
            }
        }
    }

    visitor.printSymbolTable();

    return 0;
}