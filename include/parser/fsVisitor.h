#pragma once

#include "antlr4-runtime.h"
#include "fsParser.h"
#include "fs_ast_nodes.h"


class  fsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

    virtual fs_ast_nodes::Node* visitStart(fsParser::StartContext *context) = 0;

    virtual fs_ast_nodes::Node* visitExpr(fsParser::ExprContext *context) = 0;

    virtual fs_ast_nodes::Node* visitTernaryExpr(fsParser::TernaryExprContext *context) = 0;

    virtual fs_ast_nodes::Node* visitBinaryExpr(fsParser::BinaryExprContext *context) = 0;

    virtual fs_ast_nodes::Node* visitVar_assign(fsParser::Var_assignContext *context) = 0;

    virtual fs_ast_nodes::Node* visitOr_op(fsParser::Or_opContext *context) = 0;

    virtual fs_ast_nodes::Node* visitIs_not_op(fsParser::Is_not_opContext *context) = 0;

    virtual fs_ast_nodes::Node* visitIsnt_op(fsParser::Isnt_opContext *context) = 0;

    virtual fs_ast_nodes::Node* visitAnd_op(fsParser::And_opContext *context) = 0;

    virtual fs_ast_nodes::Node* visitGt_op(fsParser::Gt_opContext *context) = 0;

    virtual fs_ast_nodes::Node* visitAdd_op(fsParser::Add_opContext *context) = 0;

    virtual fs_ast_nodes::Node* visitMul_op(fsParser::Mul_opContext *context) = 0;

    virtual fs_ast_nodes::Node* visitExponent_op(fsParser::Exponent_opContext *context) = 0;

    virtual fs_ast_nodes::Node* visitUnaryExpr(fsParser::UnaryExprContext *context) = 0;

    virtual fs_ast_nodes::Node* visitFunc_call(fsParser::Func_callContext *context) = 0;

    virtual fs_ast_nodes::Node* visitParams(fsParser::ParamsContext *context) = 0;

    virtual fs_ast_nodes::Node* visitParam(fsParser::ParamContext *context) = 0;

    virtual fs_ast_nodes::Node* visitVar_decl(fsParser::Var_declContext *context) = 0;

    virtual fs_ast_nodes::Node* visitContainer_items(fsParser::Container_itemsContext *context) = 0;

    virtual fs_ast_nodes::Node* visitContainer(fsParser::ContainerContext *context) = 0;

    virtual fs_ast_nodes::Node* visitMap_pairs(fsParser::Map_pairsContext *context) = 0;

    virtual fs_ast_nodes::Node* visitMap(fsParser::MapContext *context) = 0;

    virtual fs_ast_nodes::Node* visitStmt(fsParser::StmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitDef_params(fsParser::Def_paramsContext *context) = 0;

    virtual fs_ast_nodes::Node* visitClass_create_stmt(fsParser::Class_create_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitConstructor_body(fsParser::Constructor_bodyContext *context) = 0;

    virtual fs_ast_nodes::Node* visitClass_constructor_init(fsParser::Class_constructor_initContext *context) = 0;

    virtual fs_ast_nodes::Node* visitClass_object_init(fsParser::Class_object_initContext *context) = 0;

    virtual fs_ast_nodes::Node* visitClass_thisExpr(fsParser::Class_thisExprContext *context) = 0;

    virtual fs_ast_nodes::Node* visitClass_override_stmt(fsParser::Class_override_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitClass_overload_stmt(fsParser::Class_overload_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitClass_abstract_stmt(fsParser::Class_abstract_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitClass_body(fsParser::Class_bodyContext *context) = 0;

    virtual fs_ast_nodes::Node* visitDelete_stmt(fsParser::Delete_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitReturn_stmt(fsParser::Return_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitMut_stmt(fsParser::Mut_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitConst_stmt(fsParser::Const_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitFunc_body(fsParser::Func_bodyContext *context) = 0;

    virtual fs_ast_nodes::Node* visitFunc_def(fsParser::Func_defContext *context) = 0;

    virtual fs_ast_nodes::Node* visitCond_stmt(fsParser::Cond_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitSub_cond_stmt(fsParser::Sub_cond_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitElse_if_stmt(fsParser::Else_if_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitLoop_stmt(fsParser::Loop_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitFlow_body(fsParser::Flow_bodyContext *context) = 0;

    virtual fs_ast_nodes::Node* visitImport_stmt(fsParser::Import_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitDefine_stmt(fsParser::Define_stmtContext *context) = 0;

    virtual fs_ast_nodes::Node* visitMember_access(fsParser::Member_accessContext *context) = 0;

    virtual fs_ast_nodes::Node* visitTypeobject(fsParser::TypeobjectContext *context) = 0;

    virtual fs_ast_nodes::Node* visitObject(fsParser::ObjectContext *context) = 0;
};

