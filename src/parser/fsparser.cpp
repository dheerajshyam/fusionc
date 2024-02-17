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

        fusion_lexer::fs_token* nextToken;
        std::string nextTokenVal;

        cout << "string -> ";

        if(it != end) {
            nextToken = *it;
            nextTokenVal = any_cast<std::string>(
            FS_VarGet(nextToken->value)
            );

            if(nextToken->type == "STRING") {
                cout << "STRING: " << nextTokenVal << endl;

                it++;

                if(it != end) {
                    nextToken = *it;
                    nextTokenVal = any_cast<std::string>(
                    FS_VarGet(nextToken->value)
                    );

                    if(nextToken->type == "EOT") {
                        if(nextTokenVal == ";") {
                            FsIO_Print(stderr, FsVal_ToFsVar(
                            any(string("syntax error: unexpected ';' found "
                            "in line " + std::to_string(nextToken->lineno) + "."))
                            ));

                            delete this->lexer;
                            exit(0);
                        } else {
                            eot();
                            string_();
                        }

                    } else string_();
                }
            }
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

        if(it != end) {
            auto token = *it;
            auto tokenVal = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            if(token->type == "IDENTIFIER") {
                cout << "IDENTIFIER: " << tokenVal << endl;
                it++;
            }
        }
    }

    fs_cst* Parser::param() {

        cout << "param -> ";

        ternaryExpr();
    }

    fs_cst *Parser::params_tail() {
        if(it != end) {

            cout << "params_tail -> ";

            fusion_lexer::fs_token* nextToken;
            std::string nextTokenVal;

            nextToken = *it;
            nextTokenVal = any_cast<std::string>(
            FS_VarGet(nextToken->value)
            );

            if (nextTokenVal == ",") {

                it++;

                if(it != end)
                    params();
                else {

                    FsIO_Print(stderr, FsVal_ToFsVar(
                    any(string("syntax error: invalid termination, expecting to"
                    "remove ',' or pass a parameter after ',' inside function call "
                    "in line" + std::to_string(nextToken->lineno) + "."))
                    ));

                    delete this->lexer;
                    exit(0);
                }
            }
        }
    }

    fs_cst* Parser::params() {

        cout << "params -> ";

        param();

        params_tail();
    }

    fs_cst *Parser::func_call_tail() {

        fusion_lexer::fs_token* nextToken;
        std::string nextTokenVal;


        if(it != end) {

            cout << "func_call_tail -> ";

            nextToken = *it;
            nextTokenVal = any_cast<std::string>(
            FS_VarGet(nextToken->value)
            );

            if(nextTokenVal == "(") {

                it++;

                if(it != end) {
                    params();

                    if(it != end) {
                        nextToken = *it;
                        nextTokenVal = any_cast<std::string>(
                        FS_VarGet(nextToken->value)
                        );

                        if (nextTokenVal != ")") goto error;
                    } else goto error;

                } else {
                    error: FsIO_Print(stderr, FsVal_ToFsVar(
                    any(string("syntax error: unexpected end-of-input while parsing "
                    "function call in line " + std::to_string(
                    nextToken->lineno) + ", expecting ')' to recover the error."))
                    ));

                    delete this->lexer;
                    exit(0);
                }

            } else params();
        }
    }

    fs_cst* Parser::func_call() {

        cout << "func_call -> ";

        object();

        func_call_tail();
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

    fs_cst* Parser::bitwise_op() {
        add_op();
    }

    fs_cst* Parser::gt_op() {
        bitwise_op();
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