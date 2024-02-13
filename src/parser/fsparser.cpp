#include "fsparser.h"

namespace fusion_parser {

    // Parser related code.
    Parser::Parser(fusion_lexer::Lexer *lexer) {
        this->lexer = lexer;
        this->it = this->lexer->get_tokens().begin();
        this->end = this->lexer->get_tokens().end();
    }

    void Parser::eot() {
        if(it != end) {
            auto token = *it;
            if(token->type == "EOT") {
                it++;
                eot();
            }
        }
    }

    fs_cst* Parser::string_() {

        auto token = *it;

        while(token->type == "STRING") {
            auto value = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            cout << "STRING: " << value << endl;

            it++;

            eot();

            if(it == end)
                break;

            token = *it;
        }
    }

    fs_cst* Parser::typeobject() {

        cout << "typeobject -> ";

        auto token = *it;

        if(token->type == "STRING")
            string_();
        else if(token->type == "NUMBER") {
            auto value = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            cout << "NUMBER: " << value << endl;
        } else if(token->type == "BOOL") {
            auto value = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            cout << "BOOL: " << value << endl;
        } else if(token->type == "NIL") {
            auto value = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            cout << "NIL" << endl;
        }
    }

    fs_cst* Parser::object() {

        cout << "object -> ";

        auto token = *it;
        auto tokenVal = any_cast<std::string>(
        FS_VarGet(token->value)
        );

        if(token->type == "IDENTIFIER") {
            cout << "IDENTIFIER: " << tokenVal << endl;
            it++;
        }

    }

    fs_cst* Parser::param() {

        cout << "param -> ";

        ternaryExpr();
    }

    fs_cst* Parser::params() {

        cout << "params -> ";

        fusion_lexer::fs_token* nextToken;
        std::string nextTokenVal;

        param();

        if(it != end) {
            it++;

            nextToken = *it;
            nextTokenVal = any_cast<std::string>(
            FS_VarGet(nextToken->value)
            );

            if (nextTokenVal == ",") {
                cout << endl;
                it++;
                params();
            }
        }
    }

    fs_cst* Parser::func_call() {

        cout << "func_call -> ";

        fusion_lexer::fs_token* nextToken;
        std::string nextTokenVal;

        object();

        nextToken = *it;
        nextTokenVal = any_cast<std::string>(
        FS_VarGet(nextToken->value)
        );

        if(nextTokenVal == "(") {

            if(it != end) {

                it++;

                params();

                nextToken = *it;
                nextTokenVal = any_cast<std::string>(
                FS_VarGet(nextToken->value)
                );

                if (nextTokenVal != ")") {
                    FsIO_Print(stderr, FsVal_ToFsVar(
                    any(string("syntax error: unexpected end-of-input while parsing "
                       "function call in line " + std::to_string(
                    nextToken->lineno) + ", expecting ')' to recover the error."))
                    ));
                    delete this->lexer;
                    exit(0);
                }
            } else {
                FsIO_Print(stderr, FsVal_ToFsVar(
                any(string("syntax error: unexpected end-of-input while parsing "
                   "function call in line " + std::to_string(
                nextToken->lineno) + ", expecting ')' to recover the error."))
                ));
                delete this->lexer;
                exit(0);
            }

        } else params();
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
        or_op();
    }

    fs_cst* Parser::ternaryExpr() {

        fusion_lexer::fs_token* nextToken;
        std::string nextTokType, nextTokVal;

        binaryExpr();

        it++;

        nextToken = *it;
        nextTokType = nextToken->type;
        nextTokVal = any_cast<std::string>(
        FS_VarGet(nextToken->value));

        if(nextTokType == "KEYWORD"
            && nextTokVal == "if") {
            it++;

            ternaryExpr();

            nextToken = *it;
            nextTokType = nextToken->type;
            nextTokVal = any_cast<std::string>(
            FS_VarGet(nextToken->value));

            if(nextTokType == "KEYWORD"
                && nextTokVal == "else")
                ternaryExpr();
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
    }

    fs_cst* Parser::expr() {
        ternaryExpr();
    }

    fs_cst* Parser::start() {
        expr();
        it++;
    }

    Parser::~Parser() {
        delete this->lexer;
    }
}