// Created by Dheeraj Shyam on 16/05/23.

#ifndef FUSIONC_BASE_H
#define FUSIONC_BASE_H

#include "nodes.h"

class Visitor : public fusionBaseVisitor
{
private:
    string _source_code;
public:
    any visitStart(fusionParser::StartContext *ctx) override;
    any visitStmt(fusionParser::StmtContext *ctx) override;
    any visitVar_decl(fusionParser::Var_declContext *ctx) override;
    any visitVar_type(fusionParser::Var_typeContext *ctx) override;
    any visitVar_value(fusionParser::Var_valueContext *ctx) override;
    any visitExpr(fusionParser::ExprContext *ctx) override;
    any visitClass_ops(fusionParser::Class_opsContext *ctx) override;
    any visitClass_member_call(fusionParser::Class_member_callContext *ctx) override;
    any visitClass_object_creation(fusionParser::Class_object_creationContext *ctx) override;
    any visitClass_hierarchy(fusionParser::Class_hierarchyContext *ctx) override;
    any visitFunc_call(fusionParser::Func_callContext *ctx) override;
    any visitParams(fusionParser::ParamsContext *ctx) override;
    any visitParam(fusionParser::ParamContext *ctx) override;
    any visitTypeobjects(fusionParser::TypeobjectsContext *ctx) override;
    any visitTypeobject(fusionParser::TypeobjectContext *ctx) override;
};

#endif //FUSIONC_BASE_H