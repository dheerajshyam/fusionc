#include "fsparser.h"

namespace fusion_parser {
    Parser::Parser(fusion_lexer::Lexer *lexer) {
        this->lexer = lexer;
    }

    void* Parser::start() {
        for(auto const& token : lexer->get_tokens())
            cout << token->type << endl;
    }

    Parser::~Parser() {
        delete this->lexer;
    }
}