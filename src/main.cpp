#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"

// Headers generados por ANTLR para la nueva gramática
#include "EvaluacionFisherLexer.h"
#include "EvaluacionFisherParser.h"

// Nuestro Visitor actualizado
#include "EvalVisitor.h"

using namespace antlr4;

int main() {
    std::cout << "=== SISTEMA DE EVALUACIÓN DE EMPLEADOS - COEFICIENTE DE FISHER ===" << std::endl;
    
    // Intentar abrir el archivo de ejemplo
    std::ifstream stream;
    stream.open("../src/test_completo.txt");
    if (!stream) {
        std::cout << "No se encontró test_simple.txt, intentando con ejemplo_evaluacion.txt..." << std::endl;
        stream.open("../src/ejemplo_evaluacion.txt");
        if (!stream) {
            std::cout << "Intentando con input.txt..." << std::endl;
            stream.open("../src/input.txt");
            if (!stream) {
                std::cerr << "Error: No se pudo abrir ningún archivo de entrada." << std::endl;
                std::cerr << "Por favor, asegúrese de que existe un archivo de entrada en src/" << std::endl;
                return 1;
            }
        }
    }

    try {
        // Configurar ANTLR
        ANTLRInputStream input(stream);
        EvaluacionFisherLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        EvaluacionFisherParser parser(&tokens);

        // Analizar errores de sintaxis
        class ErrorListener : public BaseErrorListener {
        public:
            void syntaxError(Recognizer *recognizer, Token *offendingSymbol, 
                           size_t line, size_t charPositionInLine, const std::string &msg, 
                           std::exception_ptr e) override {
                std::cerr << "Error de sintaxis en línea " << line << ":" << charPositionInLine 
                          << " - " << msg << std::endl;
            }
        };

        ErrorListener errorListener;
        parser.addErrorListener(&errorListener);

        // Parsear el archivo
        tree::ParseTree* tree = parser.sistema();
        
        if (parser.getNumberOfSyntaxErrors() > 0) {
            std::cerr << "Se encontraron errores de sintaxis. Abortando ejecución." << std::endl;
            return 1;
        }

        std::cout << "\n--- Parsing completado exitosamente ---" << std::endl;
        std::cout << "Árbol parseado: " << tree->toStringTree(&parser) << std::endl;

        // Ejecutar el visitor
        EvaluacionVisitor visitor;
        visitor.visit(tree);

        // Mostrar reporte final
        std::cout << "\n--- Ejecución completada ---" << std::endl;
        visitor.imprimirReporte();

    } catch (const std::exception& e) {
        std::cerr << "\nError durante la ejecución: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "\nError desconocido durante la ejecución." << std::endl;
        return 1;
    }

    stream.close();
    std::cout << "\n=== PROGRAMA TERMINADO EXITOSAMENTE ===" << std::endl;
    return 0;
}