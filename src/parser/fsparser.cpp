#include "fsparser.h"

namespace fusion_parser {

    // Cst node related code.
    void ExprCstNode::setTernExpr(
        fusion_parser::fs_cst *node) {
        this->_ternExpr = node;
    }

    fs_cst *ExprCstNode::ternaryExpr() {
        return this->_ternExpr;
    }

    void TernaryExprCstNode::setTernExpr(
        fusion_parser::fs_cst *node, int index) {
        this->ternExpr[index] = node;
    }

    fs_cst *TernaryExprCstNode::ternaryExpr(int index) {
        if(index > 1)
            return nullptr;
        return this->ternExpr[index];
    }

    fs_cst *TernaryExprCstNode::binaryExpr() {
        return this->_binExpr;
    }

    void TernaryExprCstNode::setBinExpr(
        fusion_parser::fs_cst *node) {
        this->_binExpr = node;
    }

    // Parser related code.
    Parser::Parser(fusion_lexer::Lexer *lexer) {
        this->lexer = lexer;
        this->it = this->lexer->get_tokens().begin();
        this->end = this->lexer->get_tokens().end();
    }

    fs_cst* Parser::param() {

    }

    fs_cst* Parser::params() {

    }

    fs_cst* Parser::func_call() {
    }

    fs_cst* Parser::object() {

    }

    fs_cst* Parser::unaryExpr() {

    }

    fs_cst* Parser::exponent_op() {

    }

    fs_cst* Parser::mul_op() {

    }

    fs_cst* Parser::add_op() {

    }

    fs_cst* Parser::gt_op() {

    }

    fs_cst* Parser::and_op() {

    }

    fs_cst *Parser::isnt_op() {

    }

    fs_cst* Parser::is_not_op() {

    }

    fs_cst* Parser::or_op() {

    }

    fs_cst* Parser::binaryExpr() {
        auto* node = new BinaryExprCstNode();
        node->type = CstNodeType::BinaryExpr;
        node->setOrOp(or_op());

        return node;
    }

    fs_cst* Parser::ternaryExpr() {

        auto* node = new fs_ternExprCst();
        node->type = CstNodeType::TernaryExpr;

        fusion_lexer::fs_token* nextToken;
        std::string nextTokType, nextTokVal;

        it++;

        node->setBinExpr(binaryExpr());

        nextToken = *it;
        nextTokType = nextToken->type;
        nextTokVal = any_cast<std::string>(
        FS_VarGet(nextToken->value));

        if(nextTokType == "KEYWORD"
            && nextTokVal == "if") {
            it++;

            node->setTernExpr(ternaryExpr(), 0);

            nextToken = *it;
            nextTokType = nextToken->type;
            nextTokVal = any_cast<std::string>(
            FS_VarGet(nextToken->value));

            if(nextTokType == "KEYWORD"
                && nextTokVal == "else")
                node->setTernExpr(ternaryExpr(), 1);
            else {
                delete this->lexer;
                FsIO_Print(stderr, FsVal_ToFsVar(
               any(string("syntax error: expected else after if in"
                  "ternary expression in line " + std::to_string(nextToken->lineno) + "."))
                ));
                exit(0);
            }
        }

        return node;
    }

    fs_cst* Parser::expr() {
        auto* node = new fs_exprCst();
        node->type = CstNodeType::Expr;
        node->setTernExpr(ternaryExpr());

        return node;
    }

    fs_cst* Parser::start() {
        return expr();
    }

    Parser::~Parser() {
        delete this->lexer;
    }
}