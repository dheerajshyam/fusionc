
// Generated from fs.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  fsParser : public antlr4::Parser {
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
    DECREMENT = 57, POWER = 58, FLOOR = 59, EOT = 60, WS = 61
  };

  enum {
    RuleStart = 0, RuleExpr = 1, RuleTernaryExpr = 2, RuleBinaryExpr = 3, 
    RuleVar_assign = 4, RuleOr_op = 5, RuleIs_not_op = 6, RuleIsnt_op = 7, 
    RuleAnd_op = 8, RuleGt_op = 9, RuleAdd_op = 10, RuleMul_op = 11, RuleExponent_op = 12, 
    RuleUnaryExpr = 13, RuleFunc_call = 14, RuleParams = 15, RuleParam = 16, 
    RuleVar_decl = 17, RuleContainer_items = 18, RuleContainer = 19, RuleMap_pairs = 20, 
    RuleMap = 21, RuleStmt = 22, RuleDef_params = 23, RuleClass_create_stmt = 24, 
    RuleConstructor_body = 25, RuleClass_constructor_init = 26, RuleClass_object_init = 27, 
    RuleClass_thisExpr = 28, RuleClass_override_stmt = 29, RuleClass_overload_stmt = 30, 
    RuleClass_abstract_stmt = 31, RuleClass_body = 32, RuleDelete_stmt = 33, 
    RuleReturn_stmt = 34, RuleMut_stmt = 35, RuleConst_stmt = 36, RuleFunc_body = 37, 
    RuleFunc_def = 38, RuleCond_stmt = 39, RuleSub_cond_stmt = 40, RuleElse_if_stmt = 41, 
    RuleLoop_stmt = 42, RuleFlow_body = 43, RuleImport_stmt = 44, RuleDefine_stmt = 45, 
    RuleMember_access = 46, RuleTypeobject = 47, RuleObject = 48
  };

  explicit fsParser(antlr4::TokenStream *input);

  fsParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~fsParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class ExprContext;
  class TernaryExprContext;
  class BinaryExprContext;
  class Var_assignContext;
  class Or_opContext;
  class Is_not_opContext;
  class Isnt_opContext;
  class And_opContext;
  class Gt_opContext;
  class Add_opContext;
  class Mul_opContext;
  class Exponent_opContext;
  class UnaryExprContext;
  class Func_callContext;
  class ParamsContext;
  class ParamContext;
  class Var_declContext;
  class Container_itemsContext;
  class ContainerContext;
  class Map_pairsContext;
  class MapContext;
  class StmtContext;
  class Def_paramsContext;
  class Class_create_stmtContext;
  class Constructor_bodyContext;
  class Class_constructor_initContext;
  class Class_object_initContext;
  class Class_thisExprContext;
  class Class_override_stmtContext;
  class Class_overload_stmtContext;
  class Class_abstract_stmtContext;
  class Class_bodyContext;
  class Delete_stmtContext;
  class Return_stmtContext;
  class Mut_stmtContext;
  class Const_stmtContext;
  class Func_bodyContext;
  class Func_defContext;
  class Cond_stmtContext;
  class Sub_cond_stmtContext;
  class Else_if_stmtContext;
  class Loop_stmtContext;
  class Flow_bodyContext;
  class Import_stmtContext;
  class Define_stmtContext;
  class Member_accessContext;
  class TypeobjectContext;
  class ObjectContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOT();
    antlr4::tree::TerminalNode* EOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TernaryExprContext *ternaryExpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  TernaryExprContext : public antlr4::ParserRuleContext {
  public:
    TernaryExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BinaryExprContext *binaryExpr();
    antlr4::tree::TerminalNode *IF();
    std::vector<TernaryExprContext *> ternaryExpr();
    TernaryExprContext* ternaryExpr(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TernaryExprContext* ternaryExpr();

  class  BinaryExprContext : public antlr4::ParserRuleContext {
  public:
    BinaryExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_assignContext *var_assign();
    Member_accessContext *member_access();
    Class_thisExprContext *class_thisExpr();
    Or_opContext *or_op();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryExprContext* binaryExpr();

  class  Var_assignContext : public antlr4::ParserRuleContext {
  public:
    Var_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUALS_TO();
    TernaryExprContext *ternaryExpr();
    antlr4::tree::TerminalNode *IDEN();
    Class_thisExprContext *class_thisExpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_assignContext* var_assign();

  class  Or_opContext : public antlr4::ParserRuleContext {
  public:
    Or_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Is_not_opContext *is_not_op();
    Or_opContext *or_op();
    antlr4::tree::TerminalNode *OR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_opContext* or_op();
  Or_opContext* or_op(int precedence);
  class  Is_not_opContext : public antlr4::ParserRuleContext {
  public:
    Is_not_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Isnt_opContext *isnt_op();
    Is_not_opContext *is_not_op();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Is_not_opContext* is_not_op();
  Is_not_opContext* is_not_op(int precedence);
  class  Isnt_opContext : public antlr4::ParserRuleContext {
  public:
    Isnt_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    And_opContext *and_op();
    Isnt_opContext *isnt_op();
    antlr4::tree::TerminalNode *ISNT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Isnt_opContext* isnt_op();
  Isnt_opContext* isnt_op(int precedence);
  class  And_opContext : public antlr4::ParserRuleContext {
  public:
    And_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Gt_opContext *gt_op();
    And_opContext *and_op();
    antlr4::tree::TerminalNode *AND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_opContext* and_op();
  And_opContext* and_op(int precedence);
  class  Gt_opContext : public antlr4::ParserRuleContext {
  public:
    Gt_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Add_opContext *add_op();
    Gt_opContext *gt_op();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Gt_opContext* gt_op();
  Gt_opContext* gt_op(int precedence);
  class  Add_opContext : public antlr4::ParserRuleContext {
  public:
    Add_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mul_opContext *mul_op();
    Add_opContext *add_op();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_opContext* add_op();
  Add_opContext* add_op(int precedence);
  class  Mul_opContext : public antlr4::ParserRuleContext {
  public:
    Mul_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exponent_opContext *exponent_op();
    Mul_opContext *mul_op();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *FLOOR();
    antlr4::tree::TerminalNode *PERCENT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mul_opContext* mul_op();
  Mul_opContext* mul_op(int precedence);
  class  Exponent_opContext : public antlr4::ParserRuleContext {
  public:
    Exponent_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExprContext *unaryExpr();
    Exponent_opContext *exponent_op();
    antlr4::tree::TerminalNode *POWER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exponent_opContext* exponent_op();
  Exponent_opContext* exponent_op(int precedence);
  class  UnaryExprContext : public antlr4::ParserRuleContext {
  public:
    UnaryExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectContext *object();
    Func_callContext *func_call();
    Var_declContext *var_decl();
    Class_object_initContext *class_object_init();
    UnaryExprContext *unaryExpr();
    BinaryExprContext *binaryExpr();
    TernaryExprContext *ternaryExpr();
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS();
    antlr4::tree::TerminalNode* MINUS(size_t i);
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *LOPAREN();
    antlr4::tree::TerminalNode *ROPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExprContext* unaryExpr();

  class  Func_callContext : public antlr4::ParserRuleContext {
  public:
    Func_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectContext *object();
    antlr4::tree::TerminalNode *LOPAREN();
    antlr4::tree::TerminalNode *ROPAREN();
    ParamsContext *params();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_callContext* func_call();

  class  ParamsContext : public antlr4::ParserRuleContext {
  public:
    ParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamsContext* params();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TernaryExprContext *ternaryExpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  Var_declContext : public antlr4::ParserRuleContext {
  public:
    Var_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECL();
    antlr4::tree::TerminalNode *IDEN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declContext* var_decl();

  class  Container_itemsContext : public antlr4::ParserRuleContext {
  public:
    Container_itemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TernaryExprContext *ternaryExpr();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Container_itemsContext *> container_items();
    Container_itemsContext* container_items(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Container_itemsContext* container_items();

  class  ContainerContext : public antlr4::ParserRuleContext {
  public:
    ContainerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCPAREN();
    antlr4::tree::TerminalNode *RCPAREN();
    Container_itemsContext *container_items();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContainerContext* container();

  class  Map_pairsContext : public antlr4::ParserRuleContext {
  public:
    Map_pairsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *COLON();
    TernaryExprContext *ternaryExpr();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Map_pairsContext *> map_pairs();
    Map_pairsContext* map_pairs(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Map_pairsContext* map_pairs();

  class  MapContext : public antlr4::ParserRuleContext {
  public:
    MapContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Map_pairsContext *map_pairs();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MapContext* map();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *IGNORE();
    Func_defContext *func_def();
    Class_create_stmtContext *class_create_stmt();
    Cond_stmtContext *cond_stmt();
    Loop_stmtContext *loop_stmt();
    Import_stmtContext *import_stmt();
    Mut_stmtContext *mut_stmt();
    Const_stmtContext *const_stmt();
    Delete_stmtContext *delete_stmt();
    Return_stmtContext *return_stmt();
    Define_stmtContext *define_stmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  Def_paramsContext : public antlr4::ParserRuleContext {
  public:
    Def_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDEN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Def_paramsContext *> def_params();
    Def_paramsContext* def_params(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Def_paramsContext* def_params();

  class  Class_create_stmtContext : public antlr4::ParserRuleContext {
  public:
    Class_create_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    std::vector<antlr4::tree::TerminalNode *> IDEN();
    antlr4::tree::TerminalNode* IDEN(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *INHERITS();
    Class_bodyContext *class_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_create_stmtContext* class_create_stmt();

  class  Constructor_bodyContext : public antlr4::ParserRuleContext {
  public:
    Constructor_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TernaryExprContext *ternaryExpr();
    StmtContext *stmt();
    std::vector<antlr4::tree::TerminalNode *> EOT();
    antlr4::tree::TerminalNode* EOT(size_t i);
    Constructor_bodyContext *constructor_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constructor_bodyContext* constructor_body();

  class  Class_constructor_initContext : public antlr4::ParserRuleContext {
  public:
    Class_constructor_initContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRUCTOR();
    antlr4::tree::TerminalNode *LOPAREN();
    antlr4::tree::TerminalNode *ROPAREN();
    antlr4::tree::TerminalNode *END();
    Def_paramsContext *def_params();
    Constructor_bodyContext *constructor_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_constructor_initContext* class_constructor_init();

  class  Class_object_initContext : public antlr4::ParserRuleContext {
  public:
    Class_object_initContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    ObjectContext *object();
    antlr4::tree::TerminalNode *LOPAREN();
    antlr4::tree::TerminalNode *ROPAREN();
    ParamsContext *params();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_object_initContext* class_object_init();

  class  Class_thisExprContext : public antlr4::ParserRuleContext {
  public:
    Class_thisExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *DOT();
    TernaryExprContext *ternaryExpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_thisExprContext* class_thisExpr();

  class  Class_override_stmtContext : public antlr4::ParserRuleContext {
  public:
    Class_override_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVERRIDE();
    Func_defContext *func_def();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_override_stmtContext* class_override_stmt();

  class  Class_overload_stmtContext : public antlr4::ParserRuleContext {
  public:
    Class_overload_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVERLOAD();
    antlr4::tree::TerminalNode *LOPAREN();
    Func_defContext *func_def();
    antlr4::tree::TerminalNode *ROPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_overload_stmtContext* class_overload_stmt();

  class  Class_abstract_stmtContext : public antlr4::ParserRuleContext {
  public:
    Class_abstract_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ABSTRACT();
    Func_defContext *func_def();
    Var_declContext *var_decl();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_abstract_stmtContext* class_abstract_stmt();

  class  Class_bodyContext : public antlr4::ParserRuleContext {
  public:
    Class_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_constructor_initContext *class_constructor_init();
    Func_defContext *func_def();
    Var_declContext *var_decl();
    Class_override_stmtContext *class_override_stmt();
    Class_overload_stmtContext *class_overload_stmt();
    Class_abstract_stmtContext *class_abstract_stmt();
    std::vector<Class_bodyContext *> class_body();
    Class_bodyContext* class_body(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOT();
    antlr4::tree::TerminalNode* EOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_bodyContext* class_body();

  class  Delete_stmtContext : public antlr4::ParserRuleContext {
  public:
    Delete_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *IDEN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delete_stmtContext* delete_stmt();

  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();

  class  Mut_stmtContext : public antlr4::ParserRuleContext {
  public:
    Mut_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUT();
    StmtContext *stmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mut_stmtContext* mut_stmt();

  class  Const_stmtContext : public antlr4::ParserRuleContext {
  public:
    Const_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    StmtContext *stmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_stmtContext* const_stmt();

  class  Func_bodyContext : public antlr4::ParserRuleContext {
  public:
    Func_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TernaryExprContext *> ternaryExpr();
    TernaryExprContext* ternaryExpr(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOT();
    antlr4::tree::TerminalNode* EOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_bodyContext* func_body();

  class  Func_defContext : public antlr4::ParserRuleContext {
  public:
    Func_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *IDEN();
    antlr4::tree::TerminalNode *LOPAREN();
    antlr4::tree::TerminalNode *ROPAREN();
    antlr4::tree::TerminalNode *END();
    Def_paramsContext *def_params();
    std::vector<antlr4::tree::TerminalNode *> EOT();
    antlr4::tree::TerminalNode* EOT(size_t i);
    Func_bodyContext *func_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_defContext* func_def();

  class  Cond_stmtContext : public antlr4::ParserRuleContext {
  public:
    Cond_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> EOT();
    antlr4::tree::TerminalNode* EOT(size_t i);
    Flow_bodyContext *flow_body();
    Sub_cond_stmtContext *sub_cond_stmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cond_stmtContext* cond_stmt();

  class  Sub_cond_stmtContext : public antlr4::ParserRuleContext {
  public:
    Sub_cond_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Else_if_stmtContext *else_if_stmt();
    antlr4::tree::TerminalNode *ELSE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *THEN();
    Flow_bodyContext *flow_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sub_cond_stmtContext* sub_cond_stmt();

  class  Else_if_stmtContext : public antlr4::ParserRuleContext {
  public:
    Else_if_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<Flow_bodyContext *> flow_body();
    Flow_bodyContext* flow_body(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOT();
    antlr4::tree::TerminalNode* EOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_if_stmtContext* else_if_stmt();

  class  Loop_stmtContext : public antlr4::ParserRuleContext {
  public:
    Loop_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> EOT();
    antlr4::tree::TerminalNode* EOT(size_t i);
    Flow_bodyContext *flow_body();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_stmtContext* loop_stmt();

  class  Flow_bodyContext : public antlr4::ParserRuleContext {
  public:
    Flow_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOT();
    antlr4::tree::TerminalNode* EOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Flow_bodyContext* flow_body();

  class  Import_stmtContext : public antlr4::ParserRuleContext {
  public:
    Import_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *IDEN();
    antlr4::tree::TerminalNode *STRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Import_stmtContext* import_stmt();

  class  Define_stmtContext : public antlr4::ParserRuleContext {
  public:
    Define_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *IDEN();
    ExprContext *expr();
    StmtContext *stmt();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Define_stmtContext* define_stmt();

  class  Member_accessContext : public antlr4::ParserRuleContext {
  public:
    Member_accessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_object_initContext *class_object_init();
    antlr4::tree::TerminalNode *IDEN();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<TernaryExprContext *> ternaryExpr();
    TernaryExprContext* ternaryExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Member_accessContext* member_access();

  class  TypeobjectContext : public antlr4::ParserRuleContext {
  public:
    TypeobjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *NIL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeobjectContext* typeobject();

  class  ObjectContext : public antlr4::ParserRuleContext {
  public:
    ObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeobjectContext *typeobject();
    ContainerContext *container();
    MapContext *map();
    antlr4::tree::TerminalNode *IDEN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectContext* object();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool or_opSempred(Or_opContext *_localctx, size_t predicateIndex);
  bool is_not_opSempred(Is_not_opContext *_localctx, size_t predicateIndex);
  bool isnt_opSempred(Isnt_opContext *_localctx, size_t predicateIndex);
  bool and_opSempred(And_opContext *_localctx, size_t predicateIndex);
  bool gt_opSempred(Gt_opContext *_localctx, size_t predicateIndex);
  bool add_opSempred(Add_opContext *_localctx, size_t predicateIndex);
  bool mul_opSempred(Mul_opContext *_localctx, size_t predicateIndex);
  bool exponent_opSempred(Exponent_opContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

