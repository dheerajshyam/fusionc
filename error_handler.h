// Created by Dheeraj Shyam on 16/05/23.

#ifndef FUSIONC_ERROR_HANDLER_H
#define FUSIONC_ERROR_HANDLER_H

#include <antlr4-runtime.h>
#include <iostream>

using namespace std;

class FusionErrorHandler : public antlr4::ANTLRErrorListener
{

private:
    string _source_code;
public:
    explicit FusionErrorHandler(const string& source_code);
    void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line, size_t charPositionInLine,
        const std::string &msg, std::exception_ptr e) override;
};

#endif //FUSIONC_ERROR_HANDLER_H
