grammar fusion;

start: ((stmt | expr)+)? EOF
    ;

stmt: var_decl
    ;

var_decl: IDENTIFIER var_type '=' ( ( IDENTIFIER var_type '=' )+ )? var_value
    ;

var_type: ':' IDENTIFIER
    ;

var_value:  IDENTIFIER
            | expr
    ;

expr: func_call
     | class_ops
     | typeobjects
     ;

class_ops:  class_object_creation
            | class_member_call
            ;

class_member_call: (IDENTIFIER | class_object_creation) '.' func_call
    ;

class_object_creation: 'new' class_hierarchy '(' params? ')'
    ;

class_hierarchy: IDENTIFIER ( ('::' IDENTIFIER)+ )?
    ;

func_call:  IDENTIFIER '(' params? ')'
            | IDENTIFIER params?
    ;

params: param ((',' param)+)?
    ;

param: IDENTIFIER
      | expr
     ;

typeobjects: typeobject ((typeobject)+)?
    ;

typeobject: (STR | INT)
    ;

IDENTIFIER: [_a-zA-Z]([_a-zA-Z0-9]+)?;
STR
  : '\'' ( ESC_SEQ | ~('\''|'\\') )* '\''
  | '"' ( ESC_SEQ | ~('"'|'\\') )* '"';
INT: [0-9]([0-9]+)?;
ESC_SEQ : '\\' ( 't' | 'n' | 'r' | '\\' | '"' | '\'' );
WHITESPACE: [ \t\r\n]+ -> skip;
