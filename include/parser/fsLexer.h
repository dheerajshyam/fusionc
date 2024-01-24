
// Generated from fs.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  fsLexer : public antlr4::Lexer {
public:
  enum {
    STRING = 1, NUMBER = 2, BOOL = 3, NIL = 4, ABSTRACT = 5, ALLOW = 6, 
    AND = 7, BREAK = 8, CLASS = 9, CONST = 10, CONTINUE = 11, CONSTRUCTOR = 12, 
    DECL = 13, DEFINE = 14, DELETE = 15, DO = 16, ELSE = 17, END = 18, FUNC = 19, 
    IF = 20, IGNORE = 21, INCLUDE = 22, INHERITS = 23, IS = 24, ISNT = 25, 
    LOOP = 26, MUT = 27, NEW = 28, NOT = 29, OR = 30, OVERLOAD = 31, OVERRIDE = 32, 
    THEN = 33, THIS = 34, RETURN = 35, IDEN = 36, LOPAREN = 37, ROPAREN = 38, 
    LCPAREN = 39, RCPAREN = 40, LPAREN = 41, RPAREN = 42, EQUALS_TO = 43, 
    GT = 44, GTE = 45, LT = 46, LTE = 47, PLUS = 48, MINUS = 49, STAR = 50, 
    SLASH = 51, PERCENT = 52, COMMA = 53, COLON = 54, DOT = 55, INCREMENT = 56, 
    DECREMENT = 57, POWER = 58, FLOOR = 59, EOT = 60, COMMENT = 61, WS = 62
  };

  explicit fsLexer(antlr4::CharStream *input);

  ~fsLexer() override;


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

