
// Generated from fusion.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "fusionListener.h"


/**
 * This class provides an empty implementation of fusionListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  fusionBaseListener : public fusionListener {
public:

  virtual void enterStart(fusionParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(fusionParser::StartContext * /*ctx*/) override { }

  virtual void enterStmt(fusionParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(fusionParser::StmtContext * /*ctx*/) override { }

  virtual void enterVar_decl(fusionParser::Var_declContext * /*ctx*/) override { }
  virtual void exitVar_decl(fusionParser::Var_declContext * /*ctx*/) override { }

  virtual void enterVar_type(fusionParser::Var_typeContext * /*ctx*/) override { }
  virtual void exitVar_type(fusionParser::Var_typeContext * /*ctx*/) override { }

  virtual void enterVar_value(fusionParser::Var_valueContext * /*ctx*/) override { }
  virtual void exitVar_value(fusionParser::Var_valueContext * /*ctx*/) override { }

  virtual void enterExpr(fusionParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(fusionParser::ExprContext * /*ctx*/) override { }

  virtual void enterClass_ops(fusionParser::Class_opsContext * /*ctx*/) override { }
  virtual void exitClass_ops(fusionParser::Class_opsContext * /*ctx*/) override { }

  virtual void enterClass_member_call(fusionParser::Class_member_callContext * /*ctx*/) override { }
  virtual void exitClass_member_call(fusionParser::Class_member_callContext * /*ctx*/) override { }

  virtual void enterClass_object_creation(fusionParser::Class_object_creationContext * /*ctx*/) override { }
  virtual void exitClass_object_creation(fusionParser::Class_object_creationContext * /*ctx*/) override { }

  virtual void enterClass_hierarchy(fusionParser::Class_hierarchyContext * /*ctx*/) override { }
  virtual void exitClass_hierarchy(fusionParser::Class_hierarchyContext * /*ctx*/) override { }

  virtual void enterFunc_call(fusionParser::Func_callContext * /*ctx*/) override { }
  virtual void exitFunc_call(fusionParser::Func_callContext * /*ctx*/) override { }

  virtual void enterParams(fusionParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(fusionParser::ParamsContext * /*ctx*/) override { }

  virtual void enterParam(fusionParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(fusionParser::ParamContext * /*ctx*/) override { }

  virtual void enterTypeobjects(fusionParser::TypeobjectsContext * /*ctx*/) override { }
  virtual void exitTypeobjects(fusionParser::TypeobjectsContext * /*ctx*/) override { }

  virtual void enterTypeobject(fusionParser::TypeobjectContext * /*ctx*/) override { }
  virtual void exitTypeobject(fusionParser::TypeobjectContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

