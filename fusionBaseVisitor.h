
// Generated from fusion.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "fusionVisitor.h"


/**
 * This class provides an empty implementation of fusionVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  fusionBaseVisitor : public fusionVisitor {
public:

  virtual std::any visitStmts(fusionParser::StmtsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(fusionParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_member_call(fusionParser::Class_member_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_member(fusionParser::Class_memberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_object(fusionParser::Class_objectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_call(fusionParser::Func_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParams(fusionParser::ParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(fusionParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeobjects(fusionParser::TypeobjectsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeobject(fusionParser::TypeobjectContext *ctx) override {
    return visitChildren(ctx);
  }


};

