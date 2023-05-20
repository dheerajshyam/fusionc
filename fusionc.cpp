// Created by Dheeraj Shyam on 16/05/23.

#include "base.h"

int main()
{
    ifstream infile("/Users/dheerajshyam/CLionProjects/fusionc/test.fusion");
    string line, code;
    while(getline(infile, line))
        code += line;
    code += std::to_string(infile.eof());
    infile.close();

    antlr4::ANTLRInputStream input(code);
    fusionLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    fusionParser parser(&tokens);

    auto* visitor = new Visitor();
    cout << visitor->visit(parser.start()).type().name() << endl;

    return 0;
}