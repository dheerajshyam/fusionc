#pragma once

#ifndef FUSIONC_FS_PARSER_H
#define FUSIONC_FS_PARSER_H

#include "fslexer.h"

namespace fusion_parser {

    // CST Related Code.
    enum CstNodeType {
        Expr,
        TernaryExpr,
        BinaryExpr,
        OrOp,
        IsNotOp,
        IsntOp,
        AndOp,
        GtOp,
        AddOp,
        MulOp,
        ExponentOp,
        UnaryExpr,
        Object,
        FuncCall,
        Params,
        Param,
        TypeObject,
        String
    };

    typedef class CstNode {
    public:
        CstNodeType type;
        virtual ~CstNode() = default;
    } fs_cst;


    typedef class ExprCstNode : public CstNode {
    protected:
        fs_cst* _ternExpr = nullptr;
    public:
        fs_cst* ternaryExpr();
        void setTernExpr(fs_cst *);
    } fs_exprCst;

    typedef class TernaryExprCstNode : public CstNode {
    protected:
        fs_cst* _binExpr;
        fs_cst* ternExpr[2];
    public:
        fs_cst* binaryExpr();
        fs_cst* ternaryExpr(int); // Returns particular ternaryExpression.

        void setBinExpr(fs_cst *);
        void setTernExpr(fs_cst *, int);

    } fs_ternExprCst;

    typedef class BinaryExprCstNode : public CstNode {
    protected:
        fs_cst* _opOp;
    public:
        fs_cst* orOp();
        void setOrOp(fs_cst *);
    } fs_binExprCst;

    typedef class OrOpCstNode : public CstNode {
    public:

    } fs_orOpCst;

    // Context related code.
    class Context {
    public:
        virtual ~Context() = default;
    };

    // Parser related code.
    class Parser {
    protected:
        fusion_lexer::Lexer* lexer;

        vector<fusion_lexer::fs_token*>::iterator it;
        vector<fusion_lexer::fs_token*>::iterator end;
    public:
        explicit Parser(fusion_lexer::Lexer *);

        fs_cst* param();
        fs_cst* params();
        fs_cst* func_call();
        fs_cst* object();
        fs_cst* unaryExpr();
        fs_cst* exponent_op();
        fs_cst* mul_op();
        fs_cst* add_op();
        fs_cst* gt_op();
        fs_cst* and_op();
        fs_cst* isnt_op();
        fs_cst* is_not_op();
        fs_cst* or_op();
        fs_cst* binaryExpr();
        fs_cst* ternaryExpr();
        fs_cst* expr();
        fs_cst* start();
        ~Parser();
    };
}

#endif // FUSIONC_FS_PARSER_H