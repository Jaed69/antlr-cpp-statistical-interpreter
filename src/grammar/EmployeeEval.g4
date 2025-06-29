grammar EmployeeEval;

// Reglas del Parser
program     : statement* EOF;
statement   : declaration
            | expr ';'
            | COMMENT
            ;
declaration : TYPE ID '=' expr ';' ;
expr        : '(' expr ')'                  # parensExpr
            | op=('+'|'-') expr             # unaryExpr
            | expr op=('*'|'/') expr        # mulDivExpr
            | expr op=('+'|'-') expr        # addSubExpr
            | ID                            # idExpr
            | NUMBER                        # numberExpr
            | STRING                        # stringExpr
            | funcCall                      # funcCallExpr
            ;
funcCall    : ID '(' exprList? ')' ;
exprList    : expr (',' expr)* ;

// Reglas del Lexer
TYPE        : 'int' | 'float' | 'string' ;
ID          : [a-zA-Z_][a-zA-Z_0-9]* ;
NUMBER      : [0-9]+ ('.' [0-9]+)? ;
STRING      : '"' .*? '"' ;
WS          : [ \t\r\n]+ -> skip ;
COMMENT     : '//' ~[\r\n]* -> skip ;