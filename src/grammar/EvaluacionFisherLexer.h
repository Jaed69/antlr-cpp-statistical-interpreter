
// Generated from src/grammar/EvaluacionFisher.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  EvaluacionFisherLexer : public antlr4::Lexer {
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

  explicit EvaluacionFisherLexer(antlr4::CharStream *input);

  ~EvaluacionFisherLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

