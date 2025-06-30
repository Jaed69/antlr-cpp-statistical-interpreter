cmake_minimum_required(VERSION 3.16)
project(AntlrInterpreter CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# Usamos la versión 4.12.0 que tiene mejor soporte para C++
FetchContent_Declare(
  antlr4-cpp-runtime
  GIT_REPOSITORY https://github.com/antlr/antlr4.git
  GIT_TAG        4.12.0
  SOURCE_SUBDIR  runtime/Cpp
)
FetchContent_MakeAvailable(antlr4-cpp-runtime)

# Buscamos el JAR "COMPLETO" versión 4.12.0
find_file(ANTLR4_JAR NAMES antlr4-4.12.0-complete.jar antlr-4.12.0-complete.jar HINTS /opt/antlr /usr/local/lib)
if(NOT ANTLR4_JAR)
    message(FATAL_ERROR "No se encontró antlr4-4.12.0-complete.jar. Por favor, descárguelo y colóquelo en /opt/antlr dentro del contenedor.")
endif()

# El resto del archivo es idéntico y correcto...
function(add_antlr_parser GRAMMAR_FILE)
    get_filename_component(GRAMMAR_NAME ${GRAMMAR_FILE} NAME_WE)
    set(GENERATED_DIR ${CMAKE_CURRENT_BINARY_DIR}/generated)
    set(GENERATED_SRC ${GENERATED_DIR}/${GRAMMAR_NAME}Lexer.cpp ${GENERATED_DIR}/${GRAMMAR_NAME}Parser.cpp ${GENERATED_DIR}/${GRAMMAR_NAME}BaseVisitor.cpp ${GENERATED_DIR}/${GRAMMAR_NAME}Visitor.cpp)
    set(GENERATED_HDR ${GENERATED_DIR}/${GRAMMAR_NAME}Lexer.h ${GENERATED_DIR}/${GRAMMAR_NAME}Parser.h ${GENERATED_DIR}/${GRAMMAR_NAME}BaseVisitor.h ${GENERATED_DIR}/${GRAMMAR_NAME}Visitor.h)

    add_custom_command(
        OUTPUT ${GENERATED_SRC} ${GENERATED_HDR}
        COMMAND java -jar ${ANTLR4_JAR} -Dlanguage=Cpp -o ${GENERATED_DIR} -visitor -no-listener ${CMAKE_CURRENT_SOURCE_DIR}/src/grammar/${GRAMMAR_FILE}
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/src/grammar/${GRAMMAR_FILE}
        COMMENT "Generating ANTLR parser for ${GRAMMAR_FILE}"
    )
    set(ANTLR_GENERATED_SOURCES ${ANTLR_GENERATED_SOURCES} ${GENERATED_SRC} PARENT_SCOPE)
    set(ANTLR_GENERATED_HEADERS ${ANTLR_GENERATED_HEADERS} ${GENERATED_HDR} PARENT_SCOPE)
    include_directories(${GENERATED_DIR})
endfunction()

add_antlr_parser(EvaluacionFisher.g4)

add_executable(mi_interprete
    src/main.cpp
    src/EvalVisitor.cpp
    src/SistemaEvaluacion.cpp
    ${ANTLR_GENERATED_SOURCES}
)

# Incluir directorios necesarios
target_include_directories(mi_interprete PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}/generated
    ${antlr4-cpp-runtime_SOURCE_DIR}/runtime/Cpp/runtime/src
    src
)

target_link_libraries(mi_interprete PRIVATE antlr4_static)