#pragma once

#ifndef FUSIONC_FS_PARSER_H
#define FUSIONC_FS_PARSER_H

#include "fsparser_deps.h"

using namespace fsparser_deps;

namespace fusion_parser {

    // Parser related code.
    class Parser {
    protected:
        fusion_lexer::Lexer* lexer;

        vector<fusion_lexer::fs_token*>::iterator it;
        vector<fusion_lexer::fs_token*>::iterator end;
    public:
        explicit Parser(fusion_lexer::Lexer *);


        void eot();

        fs_cst* param();
        fs_cst* params();
        fs_cst* func_call();
        fs_cst* string_();
        fs_cst* typeobject();
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