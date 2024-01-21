#pragma once

#ifndef FUSIONC_FS_AST_BUILDER_H
#define FUSIONC_FS_AST_BUILDER_H

#include "fsdeps.h"
#include "antlr4-runtime.h"
#include "fsVisitor.h"

namespace fusion_parser {
    class  fsBaseVisitor : public fsVisitor {
    public:

        virtual std::any visitStart(fsParser::StartContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitExpr(fsParser::ExprContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitTernaryExpr(fsParser::TernaryExprContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitBinaryExpr(fsParser::BinaryExprContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitVar_assign(fsParser::Var_assignContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitOr_op(fsParser::Or_opContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitIs_not_op(fsParser::Is_not_opContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitIsnt_op(fsParser::Isnt_opContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitAnd_op(fsParser::And_opContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitGt_op(fsParser::Gt_opContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitAdd_op(fsParser::Add_opContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitMul_op(fsParser::Mul_opContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitExponent_op(fsParser::Exponent_opContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitUnaryExpr(fsParser::UnaryExprContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitFunc_call(fsParser::Func_callContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitParams(fsParser::ParamsContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitParam(fsParser::ParamContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitVar_decl(fsParser::Var_declContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitContainer_items(fsParser::Container_itemsContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitContainer(fsParser::ContainerContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitMap_pairs(fsParser::Map_pairsContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitMap(fsParser::MapContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitStmt(fsParser::StmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitDef_params(fsParser::Def_paramsContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitClass_create_stmt(fsParser::Class_create_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitConstructor_body(fsParser::Constructor_bodyContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitClass_constructor_init(fsParser::Class_constructor_initContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitClass_object_init(fsParser::Class_object_initContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitClass_thisExpr(fsParser::Class_thisExprContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitClass_override_stmt(fsParser::Class_override_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitClass_overload_stmt(fsParser::Class_overload_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitClass_abstract_stmt(fsParser::Class_abstract_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitClass_body(fsParser::Class_bodyContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitDelete_stmt(fsParser::Delete_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitReturn_stmt(fsParser::Return_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitMut_stmt(fsParser::Mut_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitConst_stmt(fsParser::Const_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitFunc_body(fsParser::Func_bodyContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitFunc_def(fsParser::Func_defContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitCond_stmt(fsParser::Cond_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitSub_cond_stmt(fsParser::Sub_cond_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitElse_if_stmt(fsParser::Else_if_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitLoop_stmt(fsParser::Loop_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitFlow_body(fsParser::Flow_bodyContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitImport_stmt(fsParser::Import_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitDefine_stmt(fsParser::Define_stmtContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitMember_access(fsParser::Member_accessContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitTypeobject(fsParser::TypeobjectContext *ctx) override {
            return visitChildren(ctx);
        }

        virtual std::any visitObject(fsParser::ObjectContext *ctx) override {
            return visitChildren(ctx);
        }


    };
}

#endif //FUSIONC_FS_AST_BUILDER_H