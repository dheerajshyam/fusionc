#include "fsparser.h"

namespace fusion_parser {

    Parser::Parser(fusion_lexer::Lexer *lexer) {
        this->lexer = lexer;
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

        if(it != end) {
            nextToken = *it;
            nextTokenVal = any_cast<std::string>(
            FS_VarGet(nextToken->value)
            );

            if(nextToken->type == "STRING") {
                cout << "string " << endl;
                cout << "STRING (" << nextTokenVal << ")" << endl;

                it++;

                string_();
            }
        }
    }

    fs_cst* Parser::typeobject() {

        cout << "typeobject" << endl;

        auto token = *it;

        if(token->type == "STRING")
            string_();
        else if(token->type == "NUMBER") {
            auto value = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            cout << "NUMBER (" << value << ")" << endl;
            it++;

        } else if(token->type == "BOOL") {
            auto value = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            cout << "BOOL: " << value << endl;
            it++;

        } else if(token->type == "NIL") {
            auto value = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            cout << "NIL" << endl;
            it++;

        }
    }

    fs_cst* Parser::params_tail() {
        if(it != end) {

            fusion_lexer::fs_token* nextToken;
            std::string nextTokenVal;

            nextToken = *it;

            if(nextToken->type != "EOT") {
                nextTokenVal = any_cast<std::string>(
                FS_VarGet(nextToken->value)
                );

                if (nextTokenVal == ",") {

                    it++;

                    if(it != end) {
                        cout << "params_tail" << endl;
                        params();
                    }
                }
            }
        }
    }

    fs_cst* Parser::param() {

        cout << "param" << endl;

        ternaryExpr();
    }

    fs_cst* Parser::params() {

        if(it != end) {
            if ((*it)->type != "EOT") {
                cout << "params" << endl;
                param();
                params_tail();
            }
        }
    }

    fs_cst* Parser::object_tail() {

        fusion_lexer::fs_token* nextToken;
        std::string nextTokenVal;

        if(it != end) {
            cout << "object_tail" << endl;

            nextToken = *it;
            nextTokenVal = any_cast<std::string>(
            FS_VarGet(nextToken->value)
            );

            if(nextToken->type != "EOT") {
                if(nextTokenVal == "(") {

                    it++;

                    params();

                    if(it != end) {
                        nextToken = *it;
                        nextTokenVal = any_cast<std::string>(
                        FS_VarGet(nextToken->value)
                        );

                        if (nextTokenVal != ")") {
                            FsIO_Print(stderr, FsVal_ToFsVar(
                            any(string("syntax error: unexpected "
                            "end-of-input found, expecting ')' in line " +
                               std::to_string(nextToken->lineno) + "."))
                            ));

                            delete this->lexer;
                            exit(0);
                        }
                    } else {
                        FsIO_Print(stderr, FsVal_ToFsVar(
                        any(string("syntax error: unexpected "
                        "end-of-input found, expecting ')' in line " +
                           std::to_string(nextToken->lineno) + "."))
                        ));

                        delete this->lexer;
                        exit(0);
                    }
                }
            }
        }
    }

    fs_cst* Parser::object() {

        cout << "object" << endl;

        if(it != end) {
            auto token = *it;
            auto tokenVal = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            if(token->type == "IDENTIFIER") {
                cout << "IDENTIFIER (" << tokenVal << ") " << endl;
                it++;
            } else typeobject();
        }
    }

    fs_cst* Parser::unaryExpr() {
        object();
        object_tail();
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
        binaryExpr();
    }

    fs_cst* Parser::expr() {
        ternaryExpr();
    }

    fs_cst* Parser::start() {

        auto tokens = this->lexer->get_tokens();
        this->it = tokens.begin();
        this->end = tokens.end();

        expr();
        it++;
    }

    Parser::~Parser() {
        delete this->lexer;
    }
}