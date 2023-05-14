
// Generated from fusion.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "fusionParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by fusionParser.
 */
class  fusionListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStmts(fusionParser::StmtsContext *ctx) = 0;
  virtual void exitStmts(fusionParser::StmtsContext *ctx) = 0;

  virtual void enterStmt(fusionParser::StmtContext *ctx) = 0;
  virtual void exitStmt(fusionParser::StmtContext *ctx) = 0;

  virtual void enterClass_member_call(fusionParser::Class_member_callContext *ctx) = 0;
  virtual void exitClass_member_call(fusionParser::Class_member_callContext *ctx) = 0;

  virtual void enterClass_member(fusionParser::Class_memberContext *ctx) = 0;
  virtual void exitClass_member(fusionParser::Class_memberContext *ctx) = 0;

  virtual void enterClass_object(fusionParser::Class_objectContext *ctx) = 0;
  virtual void exitClass_object(fusionParser::Class_objectContext *ctx) = 0;

  virtual void enterFunc_call(fusionParser::Func_callContext *ctx) = 0;
  virtual void exitFunc_call(fusionParser::Func_callContext *ctx) = 0;

  virtual void enterParams(fusionParser::ParamsContext *ctx) = 0;
  virtual void exitParams(fusionParser::ParamsContext *ctx) = 0;

  virtual void enterParam(fusionParser::ParamContext *ctx) = 0;
  virtual void exitParam(fusionParser::ParamContext *ctx) = 0;

  virtual void enterTypeobjects(fusionParser::TypeobjectsContext *ctx) = 0;
  virtual void exitTypeobjects(fusionParser::TypeobjectsContext *ctx) = 0;

  virtual void enterTypeobject(fusionParser::TypeobjectContext *ctx) = 0;
  virtual void exitTypeobject(fusionParser::TypeobjectContext *ctx) = 0;


};

