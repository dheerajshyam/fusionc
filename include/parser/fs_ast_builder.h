#pragma once

#ifndef FUSIONC_FS_AST_BUILDER_H
#define FUSIONC_FS_AST_BUILDER_H

#include "fsVisitor.h"

namespace fusion_parser {
    class fs_ast_builder : public fsVisitor {
    public:

        fs_ast_nodes::Node* visitStart(fsParser::StartContext *ctx) override;

        fs_ast_nodes::Node* visitExpr(fsParser::ExprContext *ctx) override;

        fs_ast_nodes::Node* visitBinary(fsParser::BinaryContext *ctx) override;

        fs_ast_nodes::Node* visitTernary(fsParser::TernaryContext *ctx) override;

        fs_ast_nodes::Node* visitBinaryExpr(fsParser::BinaryExprContext *ctx) override;

        fs_ast_nodes::Node* visitIsNot(fsParser::IsNotContext *ctx) override;

        fs_ast_nodes::Node* visitIsnt(fsParser::IsntContext *ctx) override;

        fs_ast_nodes::Node* visitAnd(fsParser::AndContext *ctx) override;

        fs_ast_nodes::Node* visitGt(fsParser::GtContext *ctx) override;

        fs_ast_nodes::Node* visitAdd(fsParser::AddContext *ctx) override;

        fs_ast_nodes::Node* visitMul(fsParser::MulContext *ctx) override;

        fs_ast_nodes::Node* visitExponent(fsParser::ExponentContext *ctx) override;

        fs_ast_nodes::Node* visitUnary(fsParser::UnaryContext *ctx) override;

        fs_ast_nodes::Node* visitUnary_Object(fsParser::Unary_ObjectContext *ctx) override;

        fs_ast_nodes::Node* visitFunc_Call(fsParser::Func_CallContext *ctx) override;

        fs_ast_nodes::Node* visitFunc_call(fsParser::Func_callContext *ctx) override;

        fs_ast_nodes::Node* visitUniParams(fsParser::UniParamsContext *ctx) override;

        fs_ast_nodes::Node* visitMultiParams(fsParser::MultiParamsContext *ctx) override;

        fs_ast_nodes::Node* visitParam(fsParser::ParamContext *ctx) override;

        fs_ast_nodes::Node* visitTypeobject(fsParser::TypeobjectContext *ctx) override;

        fs_ast_nodes::Node* visitObject(fsParser::ObjectContext *ctx) override;
    };
}

#endif //FUSIONC_FS_AST_BUILDER_H