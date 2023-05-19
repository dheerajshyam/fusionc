// Created by Dheeraj Shyam on 16/05/23.

#include "error_handler.h"

FusionErrorHandler::FusionErrorHandler(const string& source_code) { _source_code = source_code; }
void FusionErrorHandler::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
    size_t charPositionInLine, const std::string &msg, std::exception_ptr e)
{

}