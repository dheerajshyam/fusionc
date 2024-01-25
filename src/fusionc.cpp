#include "fusionc.h"

int main(int argc, char* argv[]) {

    if(argc >= 2) {

        string filename = string(argv[1]);

        if(!std::filesystem::exists(filename)) {
            FsIO_Print(stderr, FsVal_ToFsVar(
               any(string("error: file '" + filename + "' not found!\n"))
            ));
            exit(1);
        }

        fstream infile(filename);
        fusion_deps::fs_var code;

        code = string("");

        for (std::string line; std::getline(infile, line);)
            code.str_val += line + "\n";

        auto lexer = new fusion_lexer::Lexer();
        lexer->set_code(code);
        lexer->lex(code);

        auto parser = new fusion_parser::Parser(lexer);
        parser->parse();

        delete parser;
    }

    return 0;
}
