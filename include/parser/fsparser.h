#pragma once

#ifndef FUSIONC_FS_PARSER_H
#define FUSIONC_FS_PARSER_H

#include "fslexer.h"

namespace fusion_parser {

    // CST Related Code.
    class Node {
    public:
        virtual ~Node() = default;
    };

    // Context related code.
    class Context {
    public:
        virtual ~Context() = default;
    };

    // Parser related code.
    class Parser {
    protected:
        fusion_lexer::Lexer* lexer;
    public:
        explicit Parser(fusion_lexer::Lexer *);

        void* binaryExpr();
        void* BinaryExpr(); // ternaryExpr form 2.
        void* TernaryExpr(); // ternaryExpr form 1.
        void* expr();
        void* start();
        ~Parser();
    };
}

#endif // FUSIONC_FS_PARSER_H