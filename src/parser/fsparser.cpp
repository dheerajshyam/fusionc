#include "fsparser.h"

namespace fusion_parser {

    vector<fs_cst*> nodes;

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

        if(it != end) {
            auto token = *it;

            if(token->type == "STRING") {
                cout << "typeobject" << endl;
                string_();
            } else if(token->type == "NUMBER") {
                auto value = any_cast<std::string>(
                FS_VarGet(token->value)
                );

                cout << "typeobject" << endl;
                cout << "NUMBER (" << value << ")" << endl;
                it++;

            } else if(token->type == "BOOL") {
                auto value = any_cast<std::string>(
                FS_VarGet(token->value)
                );

                cout << "typeobject" << endl;
                cout << "BOOL (" << value << ")" << endl;

                it++;

            } else if(token->type == "NIL") {
                auto value = any_cast<std::string>(
                FS_VarGet(token->value)
                );

                cout << "typeobject" << endl;
                cout << "NIL" << endl;
                it++;

            }
        }
    }

    fs_cst* Parser::params_tail() {
        if(it != end) {

            fusion_lexer::fs_token* nextToken;
            std::string nextTokenVal;

            nextToken = *it;

            nextTokenVal = any_cast<std::string>(
            FS_VarGet(nextToken->value)
            );

            if (nextTokenVal == ",") {

                it++;

                cout << "params_tail" << endl;

                auto node = new fs_paramsTailCst();
                node->params = params();

                nodes.push_back(node);
                return node;
            }
        }

        return nullptr;
    }

    fs_cst* Parser::param() {

        cout << "param" << endl;

        auto node = new fs_paramCst();
        node->type = CstNodeType::Param;
        node->ternaryExpr = ternaryExpr();

        nodes.push_back(node);
        return node;
    }

    fs_cst* Parser::params() {

        cout << "params" << endl;
        param();
        params_tail();
    }

    fs_cst* Parser::object_tail() {

        fusion_lexer::fs_token *prevToken = nullptr, *currToken;
        std::string currTokenVal;

        if(it != end) {

            currToken = *it;
            currTokenVal = any_cast<std::string>(
            FS_VarGet(currToken->value)
            );

            if(currTokenVal == "(") {

                it++;

                cout << "object_tail" << endl;

                auto node = new fs_objTailCst();
                node->type = CstNodeType::ObjectTail;
                node->params = params();

                if(it != end) {

                    prevToken = currToken;

                    currToken = *it;
                    currTokenVal = any_cast<std::string>(
                    FS_VarGet(currToken->value)
                    );

                    if (currTokenVal != ")") {
                        delete node;
                        goto error;
                    }

                    it++;

                    nodes.push_back(node);
                    return node;

                } else {
                    delete node;
                    goto error;
                }
            }
        }

        return nullptr;

        error: {
            FsIO_Print(stderr, FsVal_ToFsVar(
            any(string("syntax error: unexpected "
            "end-of-input found, expecting ')' in line " +
               std::to_string(
               prevToken != nullptr
                    ? prevToken->lineno
                    : currToken->lineno
                ) + "."))
            ));

            delete this->lexer;
            exit(0);
        }
    }

    fs_cst* Parser::object() {

        if(it != end) {
            cout << "object" << endl;

            auto node = new fs_objectCst();
            node->type = CstNodeType::Object;

            auto token = *it;
            auto tokenVal = any_cast<std::string>(
            FS_VarGet(token->value)
            );

            if(token->type == "IDENTIFIER") {
                node->IDEN = tokenVal;
                cout << "IDENTIFIER (" << tokenVal << ") " << endl;
                it++;

                nodes.push_back(node);
                return node;
            } else {
                node->typeobject = typeobject();

                nodes.push_back(node);
                return node;
            }
        }

        return nullptr;
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
        for(auto const &node : nodes)
            delete node;
        delete this->lexer;
    }
}