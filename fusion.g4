grammar fusion;

stmts: stmt+ EOF
    ;

stmt: func_call
    ;

func_call:  IDENTIFIER LOBRACE params? ROBRACE
            | IDENTIFIER params
    ;

params: param ((',' param)+)?
    ;

param: typeobjects
     ;

typeobjects: typeobject ((typeobject)+)?
    ;

typeobject: STRING
    ;

IDENTIFIER: [_a-zA-Z][_a-zA-Z0-9]+;
LOBRACE: '(';
ROBRACE: ')';
STRING
  : '\'' ( ESC_SEQ | ~('\''|'\\') )* '\''
  | '"' ( ESC_SEQ | ~('"'|'\\') )* '"';
ESC_SEQ : '\\' ( 't' | 'n' | 'r' | '\\' | '"' | '\'' );
