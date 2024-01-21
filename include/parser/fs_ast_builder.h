#pragma once

#ifndef FUSIONC_FS_AST_BUILDER_H
#define FUSIONC_FS_AST_BUILDER_H

#include "fsVisitor.h"

namespace fusion_parser {
    class fs_ast_builder : public fsVisitor {
    public:
        fs_ast_nodes::Node* visitStart(fsParser::StartContext *context) override;

        fs_ast_nodes::Node* visitExpr(fsParser::ExprContext *context) override;

        fs_ast_nodes::Node* visitTernaryExpr(fsParser::TernaryExprContext *context) override;

        fs_ast_nodes::Node* visitBinaryExpr(fsParser::BinaryExprContext *context) override;

        fs_ast_nodes::Node* visitVar_assign(fsParser::Var_assignContext *context) override;

        fs_ast_nodes::Node* visitOr_op(fsParser::Or_opContext *context) override;

        fs_ast_nodes::Node* visitIs_not_op(fsParser::Is_not_opContext *context) override;

        fs_ast_nodes::Node* visitIsnt_op(fsParser::Isnt_opContext *context) override;

        fs_ast_nodes::Node* visitAnd_op(fsParser::And_opContext *context) override;

        fs_ast_nodes::Node* visitGt_op(fsParser::Gt_opContext *context) override;

        fs_ast_nodes::Node* visitAdd_op(fsParser::Add_opContext *context) override;

        fs_ast_nodes::Node* visitMul_op(fsParser::Mul_opContext *context) override;

        fs_ast_nodes::Node* visitExponent_op(fsParser::Exponent_opContext *context) override;

        fs_ast_nodes::Node* visitUnaryExpr(fsParser::UnaryExprContext *context) override;

        fs_ast_nodes::Node* visitFunc_call(fsParser::Func_callContext *context) override;

        fs_ast_nodes::Node* visitParams(fsParser::ParamsContext *context) override;

        fs_ast_nodes::Node* visitParam(fsParser::ParamContext *context) override;

        fs_ast_nodes::Node* visitVar_decl(fsParser::Var_declContext *context) override;

        fs_ast_nodes::Node* visitContainer_items(fsParser::Container_itemsContext *context) override;

        fs_ast_nodes::Node* visitContainer(fsParser::ContainerContext *context) override;

        fs_ast_nodes::Node* visitMap_pairs(fsParser::Map_pairsContext *context) override;

        fs_ast_nodes::Node* visitMap(fsParser::MapContext *context) override;

        fs_ast_nodes::Node* visitStmt(fsParser::StmtContext *context) override;

        fs_ast_nodes::Node* visitDef_params(fsParser::Def_paramsContext *context) override;

        fs_ast_nodes::Node* visitClass_create_stmt(fsParser::Class_create_stmtContext *context) override;

        fs_ast_nodes::Node* visitConstructor_body(fsParser::Constructor_bodyContext *context) override;

        fs_ast_nodes::Node* visitClass_constructor_init(fsParser::Class_constructor_initContext *context) override;

        fs_ast_nodes::Node* visitClass_object_init(fsParser::Class_object_initContext *context) override;

        fs_ast_nodes::Node* visitClass_thisExpr(fsParser::Class_thisExprContext *context) override;

        fs_ast_nodes::Node* visitClass_override_stmt(fsParser::Class_override_stmtContext *context) override;

        fs_ast_nodes::Node* visitClass_overload_stmt(fsParser::Class_overload_stmtContext *context) override;

        fs_ast_nodes::Node* visitClass_abstract_stmt(fsParser::Class_abstract_stmtContext *context) override;

        fs_ast_nodes::Node* visitClass_body(fsParser::Class_bodyContext *context) override;

        fs_ast_nodes::Node* visitDelete_stmt(fsParser::Delete_stmtContext *context) override;

        fs_ast_nodes::Node* visitReturn_stmt(fsParser::Return_stmtContext *context) override;

        fs_ast_nodes::Node* visitMut_stmt(fsParser::Mut_stmtContext *context) override;

        fs_ast_nodes::Node* visitConst_stmt(fsParser::Const_stmtContext *context) override;

        fs_ast_nodes::Node* visitFunc_body(fsParser::Func_bodyContext *context) override;

        fs_ast_nodes::Node* visitFunc_def(fsParser::Func_defContext *context) override;

        fs_ast_nodes::Node* visitCond_stmt(fsParser::Cond_stmtContext *context) override;

        fs_ast_nodes::Node* visitSub_cond_stmt(fsParser::Sub_cond_stmtContext *context) override;

        fs_ast_nodes::Node* visitElse_if_stmt(fsParser::Else_if_stmtContext *context) override;

        fs_ast_nodes::Node* visitLoop_stmt(fsParser::Loop_stmtContext *context) override;

        fs_ast_nodes::Node* visitFlow_body(fsParser::Flow_bodyContext *context) override;

        fs_ast_nodes::Node* visitImport_stmt(fsParser::Import_stmtContext *context) override;

        fs_ast_nodes::Node* visitDefine_stmt(fsParser::Define_stmtContext *context) override;

        fs_ast_nodes::Node* visitMember_access(fsParser::Member_accessContext *context) override;

        fs_ast_nodes::Node* visitTypeobject(fsParser::TypeobjectContext *context) override;

        fs_ast_nodes::Node* visitObject(fsParser::ObjectContext *context) override;
    };
}

#endif //FUSIONC_FS_AST_BUILDER_H