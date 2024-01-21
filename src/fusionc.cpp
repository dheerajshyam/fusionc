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

        cout << any_cast<std::string>(FS_VarGet(code)) << endl;
    }

    return 0;
}
