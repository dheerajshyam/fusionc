//
// Created by Dheeraj Shyam on 09/02/24.
//

#ifndef FUSIONC_FSCSTNODES_H
#define FUSIONC_FSCSTNODES_H

#include "fslexer.h"

namespace fsparser_deps {
    enum CstNodeType {
        Expr,
        TernaryExpr,
        BinaryExpr,
        OrOp,
        IsNotOp,
        IsntOp,
        AndOp,
        GtOp,
        BitwiseOp,
        AddOp,
        MulOp,
        ExponentOp,
        UnaryExpr,
        Object,
        ObjectTail,
        Params,
        ParamsTail,
        Param,
        TypeObject,
        String
    };

    // Base CST Class.
    typedef class CstNode {
    public:
        CstNodeType type;
        virtual ~CstNode() = default;
    } fs_cst;

    // Expr CST Class.
    typedef class ExprCstNode : public CstNode {
    public:
        fs_cst* ternExpr = nullptr;
    } fs_exprCst;

    // TernaryExpr CST Class.
    typedef class TernaryExprCstNode : public CstNode {
    public:
        fs_cst* binExpr;
        fs_cst* ternExpr[2];
    } fs_ternExprCst;

    // BinaryExpr CST Class.
    typedef class BinaryExprCstNode : public CstNode {
    public:
        fs_cst* orOp;
    } fs_binExprCst;

    // OrOp CST Class.
    typedef class OrOpCstNode : public CstNode {
    public:
        fs_cst* is_not_op;
    } fs_orOpCst;

    // IsNotOp CST Class.
    typedef class IsNotOpCstNode : public CstNode {
    public:
        fs_cst* isnt_op;
    } fs_isNotOpCst;

    // IsntOp CST Class
    typedef class IsntOpCstNode : public CstNode {
    public:
        fs_cst* and_op;
    } fs_isntOpCst;

    // AndOp CST Class
    typedef class AndOpCstNode : public CstNode {
    public:
        fs_cst* gt_op;
    } fs_andOpCst;

    // GtOp CST Class
    typedef class GtOpCstNode : public CstNode {
    public:
        fs_cst* bitwise_op;
    } fs_gtOpCst;

    // BitwiseOp CST Class
    typedef class BitwiseOpCstNode : public CstNode {
    public:
        fs_cst* add_op;
    } fs_bitwiseOpCst;

    // AddOp CST Class
    typedef class AddOpCstNode : public CstNode {
    public:
        fs_cst* mul_op;
    } fs_addOpCst;

    // MulOp CST Class
    typedef class MulOpCstNode : public CstNode {
    public:
        fs_cst* exponent_op;
    } fs_mulOpCst;

    // ExponentOp CST Class
    typedef class ExponentOpCstNode : public CstNode {
    public:
        fs_cst* unaryExpr;
    } fs_exponentOpCst;

    // UnaryExpr CST Class
    typedef class UnaryExprCstNode : public CstNode {
    public:
        fs_cst* object;
        fs_cst* object_tail;
    } fs_unaryExprCst;

    // Object CST Class
    typedef class ObjectCstNode : public CstNode {
    public:
        std::string IDEN;
    } fs_objectCst;

    // String CST Class.
    typedef class StringCstNode : public CstNode {
    public:
        std::vector<std::string> value;
    } fs_strCst;

    // TypeObject CST Class.
    typedef class TypeObjectCstNode : public CstNode {
    public:
        fs_cst *strValue;
        std::string value;
        std::string type;
    } fs_typeobjCst;
}

#endif //FUSIONC_FSCSTNODES_H
