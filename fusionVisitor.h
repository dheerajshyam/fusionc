
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
    virtual std::any visitStmts(fusionParser::StmtsContext *context) = 0;

    virtual std::any visitStmt(fusionParser::StmtContext *context) = 0;

    virtual std::any visitClass_member_call(fusionParser::Class_member_callContext *context) = 0;

    virtual std::any visitClass_member(fusionParser::Class_memberContext *context) = 0;

    virtual std::any visitFunc_call(fusionParser::Func_callContext *context) = 0;

    virtual std::any visitParams(fusionParser::ParamsContext *context) = 0;

    virtual std::any visitParam(fusionParser::ParamContext *context) = 0;

    virtual std::any visitTypeobjects(fusionParser::TypeobjectsContext *context) = 0;

    virtual std::any visitTypeobject(fusionParser::TypeobjectContext *context) = 0;


};

