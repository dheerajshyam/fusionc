#pragma once

#ifndef FUSIONC_FSLEXER_H
#define FUSIONC_FSLEXER_H

#include "fsdeps.h"

using namespace fusion_deps;

namespace fusion_lexer {

    typedef class Token {
    public:
        string type;
        int lineno;
        int lexpos;
        fusion_deps::fs_var value;
    } fs_token;

    class Lexer {
    protected:
        fusion_dfa::State* num_head;
        fusion_dfa::State* str_head;
        fusion_dfa::State* iden_head;

        fusion_deps::fs_var source_code;

        vector<fs_token*> tokens;
        vector <string> keywords;

        int lineno = 1;
        int lexpos = 0;

    public:
        Lexer();

        void set_code(fusion_deps::fs_var const &);

        vector<fs_token*> get_tokens();

        std::string::iterator lex_num(
            std::string::iterator&,
                std::string::iterator);

        std::string::iterator lex_string(
            std::string::iterator&,
                std::string::iterator, bool);

        std::string::iterator lex_iden(
                std::string::iterator&,
                std::string::iterator);

        void lex(fusion_deps::fs_var const &);

        ~Lexer();
    };
}

#endif // FUSIONC_FSLEXER_H
