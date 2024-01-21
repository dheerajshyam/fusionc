
// Generated from fs.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "fsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by fsParser.
 */
class  fsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by fsParser.
   */
    virtual std::any visitStart(fsParser::StartContext *context) = 0;

    virtual std::any visitExpr(fsParser::ExprContext *context) = 0;

    virtual std::any visitTernaryExpr(fsParser::TernaryExprContext *context) = 0;

    virtual std::any visitBinaryExpr(fsParser::BinaryExprContext *context) = 0;

    virtual std::any visitVar_assign(fsParser::Var_assignContext *context) = 0;

    virtual std::any visitOr_op(fsParser::Or_opContext *context) = 0;

    virtual std::any visitIs_not_op(fsParser::Is_not_opContext *context) = 0;

    virtual std::any visitIsnt_op(fsParser::Isnt_opContext *context) = 0;

    virtual std::any visitAnd_op(fsParser::And_opContext *context) = 0;

    virtual std::any visitGt_op(fsParser::Gt_opContext *context) = 0;

    virtual std::any visitAdd_op(fsParser::Add_opContext *context) = 0;

    virtual std::any visitMul_op(fsParser::Mul_opContext *context) = 0;

    virtual std::any visitExponent_op(fsParser::Exponent_opContext *context) = 0;

    virtual std::any visitUnaryExpr(fsParser::UnaryExprContext *context) = 0;

    virtual std::any visitFunc_call(fsParser::Func_callContext *context) = 0;

    virtual std::any visitParams(fsParser::ParamsContext *context) = 0;

    virtual std::any visitParam(fsParser::ParamContext *context) = 0;

    virtual std::any visitVar_decl(fsParser::Var_declContext *context) = 0;

    virtual std::any visitContainer_items(fsParser::Container_itemsContext *context) = 0;

    virtual std::any visitContainer(fsParser::ContainerContext *context) = 0;

    virtual std::any visitMap_pairs(fsParser::Map_pairsContext *context) = 0;

    virtual std::any visitMap(fsParser::MapContext *context) = 0;

    virtual std::any visitStmt(fsParser::StmtContext *context) = 0;

    virtual std::any visitDef_params(fsParser::Def_paramsContext *context) = 0;

    virtual std::any visitClass_create_stmt(fsParser::Class_create_stmtContext *context) = 0;

    virtual std::any visitConstructor_body(fsParser::Constructor_bodyContext *context) = 0;

    virtual std::any visitClass_constructor_init(fsParser::Class_constructor_initContext *context) = 0;

    virtual std::any visitClass_object_init(fsParser::Class_object_initContext *context) = 0;

    virtual std::any visitClass_thisExpr(fsParser::Class_thisExprContext *context) = 0;

    virtual std::any visitClass_override_stmt(fsParser::Class_override_stmtContext *context) = 0;

    virtual std::any visitClass_overload_stmt(fsParser::Class_overload_stmtContext *context) = 0;

    virtual std::any visitClass_abstract_stmt(fsParser::Class_abstract_stmtContext *context) = 0;

    virtual std::any visitClass_body(fsParser::Class_bodyContext *context) = 0;

    virtual std::any visitDelete_stmt(fsParser::Delete_stmtContext *context) = 0;

    virtual std::any visitReturn_stmt(fsParser::Return_stmtContext *context) = 0;

    virtual std::any visitMut_stmt(fsParser::Mut_stmtContext *context) = 0;

    virtual std::any visitConst_stmt(fsParser::Const_stmtContext *context) = 0;

    virtual std::any visitFunc_body(fsParser::Func_bodyContext *context) = 0;

    virtual std::any visitFunc_def(fsParser::Func_defContext *context) = 0;

    virtual std::any visitCond_stmt(fsParser::Cond_stmtContext *context) = 0;

    virtual std::any visitSub_cond_stmt(fsParser::Sub_cond_stmtContext *context) = 0;

    virtual std::any visitElse_if_stmt(fsParser::Else_if_stmtContext *context) = 0;

    virtual std::any visitLoop_stmt(fsParser::Loop_stmtContext *context) = 0;

    virtual std::any visitFlow_body(fsParser::Flow_bodyContext *context) = 0;

    virtual std::any visitImport_stmt(fsParser::Import_stmtContext *context) = 0;

    virtual std::any visitDefine_stmt(fsParser::Define_stmtContext *context) = 0;

    virtual std::any visitMember_access(fsParser::Member_accessContext *context) = 0;

    virtual std::any visitTypeobject(fsParser::TypeobjectContext *context) = 0;

    virtual std::any visitObject(fsParser::ObjectContext *context) = 0;
};

