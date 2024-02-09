#include "fsparser_deps.h"

namespace fsparser_deps {
    // Expr CST.
    void ExprCstNode::setTernExpr(fs_cst *node) {
        this->_ternExpr = node;
    }

    fs_cst* ExprCstNode::ternaryExpr() {
        return this->_ternExpr;
    }

    // TernaryExpr CST.
    void TernaryExprCstNode::setTernExpr(
        fs_cst *node, int index) {
        this->ternExpr[index] = node;
    }

    fs_cst* TernaryExprCstNode::ternaryExpr(int index) {
        if(index > 1)
            return nullptr;
        return this->ternExpr[index];
    }

    fs_cst* TernaryExprCstNode::binaryExpr() {
        return this->_binExpr;
    }

    void TernaryExprCstNode::setBinExpr(fs_cst *node) {
        this->_binExpr = node;
    }

    // BinaryExpr CST.
    void BinaryExprCstNode::setOrOp(fs_cst *node) {
        this->_orOp = node;
    }

    fs_cst* BinaryExprCstNode::orOp() {
        return this->_orOp;
    }

    // String CST.
    std::string StringCstNode::STRING(int index) {
        return this->value[index];
    }

    void StringCstNode::pushString(
            std::string str_) {
        this->value.push_back(str_);
    }

    // TypeObject CST.
    void TypeObjectCstNode::setStr(
        fsparser_deps::fs_cst *strValue_) {
        this->strValue = strValue_;
        this->type = "string";
    }

    void TypeObjectCstNode::setValue(
        std::string const &value_, std::string const &type_) {
        this->value = value_;
        this->type = type_;
    }
}