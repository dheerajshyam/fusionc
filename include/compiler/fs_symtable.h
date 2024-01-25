#pragma once

#ifndef FUSIONC_FS_SYMTABLE_H
#define FUSIONC_FS_SYMTABLE_H

#include "fsparser.h"

namespace fusion_symtable {

    enum SymType {
        VAR = 1,
        FUNC = 2
    };

    typedef class Entry {
    public:
        SymType sym_type;
        virtual ~Entry() = default;

    } fs_sym_entry;

    typedef class FuncDefEntry : public Entry {
    public:
        fusion_deps::fs_var name;
        vector<fusion_deps::fs_var> param_types;
        fusion_deps::fs_var return_type;
    } fs_sym_funcdef_entry;

    class SymTable {
    protected:
        map<std::string, fs_sym_entry*> table;
    public:
        void insert(fusion_deps::fs_var const &, fusion_symtable::fs_sym_entry*);
        void* lookup(fusion_deps::fs_var const &);
    };

    typedef class Global : public SymTable {
    public: void load_globals();
    } fs_glob_symtab;

    typedef class Local : public SymTable {} fs_local_symtab;
}

#endif //FUSIONC_FS_SYMTABLE_H
