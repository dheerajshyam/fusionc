
#include "fs_ast_builder.h"

namespace fusion_parser {

    fs_ast_nodes::Node *fs_ast_builder::visitStart(
        fsParser::StartContext *ctx) {
        cout << ctx->depth() << endl;
    }

    fs_ast_nodes::Node *fs_ast_builder::visitExpr(
        fsParser::ExprContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitBinary(
        fsParser::BinaryContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitTernary(
        fsParser::TernaryContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitBinaryExpr(
        fsParser::BinaryExprContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitIsNot(
        fsParser::IsNotContext *ctx) {

    }


    fs_ast_nodes::Node *fs_ast_builder::visitIsnt(
        fsParser::IsntContext *ctx) {

    }


    fs_ast_nodes::Node *fs_ast_builder::visitAnd(
        fsParser::AndContext *ctx) {

    }


    fs_ast_nodes::Node *fs_ast_builder::visitGt(
        fsParser::GtContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitAdd(
        fsParser::AddContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitMul(
        fsParser::MulContext *ctx) {

    }


    fs_ast_nodes::Node *fs_ast_builder::visitExponent(
        fsParser::ExponentContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitUnary(
        fsParser::UnaryContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitUnary_Object(
        fsParser::Unary_ObjectContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitTypeobject(
        fsParser::TypeobjectContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitObject(
        fsParser::ObjectContext *ctx) {

    }

    fs_ast_nodes::Node *fs_ast_builder::visitFunc_Call(
        fsParser::Func_CallContext *ctx) {
    }

    fs_ast_nodes::Node *fs_ast_builder::visitUniParams(
        fsParser::UniParamsContext *ctx) {
    }

    fs_ast_nodes::Node *fs_ast_builder::visitMultiParams(
        fsParser::MultiParamsContext *ctx) {
    }

    fs_ast_nodes::Node *fs_ast_builder::visitParam(
        fsParser::ParamContext *ctx) {
    }

    fs_ast_nodes::Node *fs_ast_builder::visitFunc_call(
        fsParser::Func_callContext *ctx) {

    }
}