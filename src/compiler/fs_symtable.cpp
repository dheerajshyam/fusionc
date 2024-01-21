
#include "fs_symtable.h"

void fusion_symtable::SymTable::insert(fusion_deps::fs_var const & val, fusion_symtable::fs_sym_entry* entry) {
    if(val.var_type == fusion_deps::fs_var::TypeName::STRING) {
        auto name = any_cast<std::string>(FS_VarGet(val));
        this->table[name] = entry;
    }
}

void* fusion_symtable::SymTable::lookup(fusion_deps::fs_var const &symbol) {
    if(symbol.var_type == fusion_deps::fs_var::TypeName::STRING) {
        auto name = any_cast<std::string>(FS_VarGet(symbol));
        if(this->table.find(name) != this->table.end())
            return this->table[name];
        return nullptr;
    }

    FsIO_Print(stderr, FsVal_ToFsVar(
   any(string("fatal: internal error occurred."))
    ));
    exit(1);
}

void fusion_symtable::fs_glob_symtab::load_globals() {

    // Creating an entry for builtin print function.
    fusion_symtable::fs_sym_funcdef_entry print_func;
    print_func.name = string("print");
    print_func.param_types.push_back(FsVal_ToFsVar(
    any(string("tuple"))
    ));
    print_func.return_type = string("nil");
    print_func.sym_type = fusion_symtable::SymType::FUNC;

    // Inserting all the builtin entries in global symbol table.
    this->insert(print_func.name, &print_func);
}
