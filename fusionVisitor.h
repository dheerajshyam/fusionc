
// Generated from fusion.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "fusionParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by fusionParser.
 */
class  fusionVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by fusionParser.
   */
    virtual std::any visitStart(fusionParser::StartContext *context) = 0;

    virtual std::any visitStmt(fusionParser::StmtContext *context) = 0;

    virtual std::any visitVar_decl(fusionParser::Var_declContext *context) = 0;

    virtual std::any visitVar_type(fusionParser::Var_typeContext *context) = 0;

    virtual std::any visitVar_value(fusionParser::Var_valueContext *context) = 0;

    virtual std::any visitExpr(fusionParser::ExprContext *context) = 0;

    virtual std::any visitClass_ops(fusionParser::Class_opsContext *context) = 0;

    virtual std::any visitClass_member_call(fusionParser::Class_member_callContext *context) = 0;

    virtual std::any visitClass_object_creation(fusionParser::Class_object_creationContext *context) = 0;

    virtual std::any visitClass_hierarchy(fusionParser::Class_hierarchyContext *context) = 0;

    virtual std::any visitFunc_call(fusionParser::Func_callContext *context) = 0;

    virtual std::any visitParams(fusionParser::ParamsContext *context) = 0;

    virtual std::any visitParam(fusionParser::ParamContext *context) = 0;

    virtual std::any visitTypeobjects(fusionParser::TypeobjectsContext *context) = 0;

    virtual std::any visitTypeobject(fusionParser::TypeobjectContext *context) = 0;


};

