//
// Created by Dheeraj Shyam on 09/02/24.
//

#ifndef FUSIONC_FSPARSER_DEPS_H
#define FUSIONC_FSPARSER_DEPS_H

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

    // Base CST Class.
    typedef class CstNode {
    public:
        CstNodeType type;
        virtual ~CstNode() = default;
    } fs_cst;

    // Expr CST Class.
    typedef class ExprCstNode : public CstNode {
    protected:
        fs_cst* _ternExpr = nullptr;
    public:
        fs_cst* ternaryExpr();
        void setTernExpr(fs_cst *);
    } fs_exprCst;

    // TernaryExpr CST Class.
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

    // BinaryExpr CST Class.
    typedef class BinaryExprCstNode : public CstNode {
    protected:
        fs_cst* _orOp;
    public:
        fs_cst* orOp();
        void setOrOp(fs_cst *);
    } fs_binExprCst;

    // String CST Class.
    typedef class StringCstNode : public CstNode {
    protected:
        std::vector<std::string> value;
    public:
        std::string STRING(int);
        void pushString(std::string);
    } fs_strCst;

    // TypeObject CST Class.
    typedef class TypeObjectCstNode : public CstNode {
    protected:
        fs_cst *strValue;
        std::string value;
        std::string type;
    public:

        fs_cst *string();

        std::string NUMBER();

        std::string BOOL();

        std::string NIL();

        void setStr(fs_cst *);

        void setValue(std::string const &, std::string const &);

    } fs_typeobjCst;
}

#endif //FUSIONC_FSPARSER_DEPS_H
