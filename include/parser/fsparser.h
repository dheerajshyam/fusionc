#pragma once

#ifndef FUSIONC_FS_PARSER_H
#define FUSIONC_FS_PARSER_H

#include "fslexer.h"

namespace fusion_parser {

    class Node {
    public:
        virtual ~Node() = default;
    };

    class Parser {
    protected:
        fusion_lexer::Lexer* lexer;
    public:
        explicit Parser(fusion_lexer::Lexer *);
        void parse();
        ~Parser();
    };
}

#endif // FUSIONC_FS_PARSER_H