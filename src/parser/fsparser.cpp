#include "fsparser.h"

namespace fusion_parser {

    // Parser related code.
    Parser::Parser(fusion_lexer::Lexer *lexer) {
        this->lexer = lexer;
        this->it = this->lexer->get_tokens().begin();
        this->end = this->lexer->get_tokens().end();
    }

    void Parser::eot() {
        auto token = *it;
        while (token->type == "EOT") {
            it++;
            if(it == end)
                break;
            token = *it;
        }
    }

    fs_cst* Parser::param() {

    }

    fs_cst* Parser::params() {

    }

    fs_cst* Parser::func_call() {
        object();
    }

    fs_cst* Parser::string_() {

        auto token = *it;
        auto* node = new fs_strCst();

        while(token->type == "STRING") {
            auto value = any_cast<std::string>(
                    FS_VarGet(token->value)
            );

            node->pushString(value);

            it++;

            eot();

            if(it == end)
                break;

            token = *it;
        }

        return node;
    }

    fs_cst* Parser::typeobject() {
        auto token = *it;


        if(token->type == "STRING") {
            auto* node = string_();
        } else if(token->type == "NUMBER") {
            auto value = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            auto* node = new fs_typeobjCst();
            node->setNumber(value);

            return node;
        } else if(token->type == "BOOL") {
            auto value = any_cast<std::string>(
            FS_VarGet(token->value)
            );
        }
    }

    fs_cst* Parser::object() {
        typeobject();
    }

    fs_cst* Parser::unaryExpr() {
        func_call();
    }

    fs_cst* Parser::exponent_op() {
        unaryExpr();
    }

    fs_cst* Parser::mul_op() {
        exponent_op();
    }

    fs_cst* Parser::add_op() {
        mul_op();
    }

    fs_cst* Parser::gt_op() {
        add_op();
    }

    fs_cst* Parser::and_op() {
        gt_op();
    }

    fs_cst *Parser::isnt_op() {
        and_op();
    }

    fs_cst* Parser::is_not_op() {
        isnt_op();
    }

    fs_cst* Parser::or_op() {
        is_not_op();
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

        node->setBinExpr(binaryExpr());

        it++;

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
                  "ternary expression in line " + std::to_string(
                  nextToken->lineno) + "."))
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
        while(it != end) {
            expr();
            it++;
        }
    }

    Parser::~Parser() {
        delete this->lexer;
    }
}