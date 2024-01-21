#pragma once

#ifndef FUSIONC_FSDEPS_H
#define FUSIONC_FSDEPS_H

#include "imports_decls.h"

namespace fusion_deps {

    typedef class FS_Variable {
        public:
            // Enum to hold object typenames.
            typedef enum TypeName {
                INT, FLOAT, LONG, BOOL, DOUBLE, WIDE, STRING
            } fs_typename;

            // Enum value holder to identify the right value holder.
            fs_typename var_type;

            // Value holders.
            int ival;
            float fval;
            long lval;
            bool bval;
            double dval;
            wchar_t wval;
            string str_val;

            // Operator over-loaders for assigning values into holders.
            FS_Variable &operator=(int);
            FS_Variable &operator=(float);
            FS_Variable &operator=(long);
            FS_Variable &operator=(bool);
            FS_Variable &operator=(double);
            FS_Variable &operator=(wchar_t);
            FS_Variable &operator=(string const &);

            // Clean the previous values from holders.
            void clean();
    } fs_var;

    // Smart pointer for universal variable.
    typedef class FS_Ptr {
        protected:
            fs_var* ptr;
            fs_var* main_ptr;
        public:
            FS_Ptr();
            fs_var &operator * ();
            [[maybe_unused]] fs_var* get_ptr();
            [[maybe_unused]] void set_ptr(fs_var*);
            ~FS_Ptr();
    } fsptr;

    // DFA
    namespace fusion_dfa {
        typedef class State {
        protected:
            fusion_deps::fs_var name;
        public:
            explicit State(fusion_deps::fs_var val) : name(std::move(val)) {}
            auto get_name() { return this->name; }
        } fs_state;

        auto* FsDfa_BuildNumDfa();
        auto* FsDfa_BuildStringDfa();
        auto* FsDfa_BuildIdenDfa();
    }
}

void FsState_AddState(
    map<string, fusion_deps::fusion_dfa::fs_state*> &,
        fusion_deps::fusion_dfa::State*);
void clean_states(map<string, fusion_deps::fusion_dfa::fs_state*>);
void FsIO_Print(FILE*, fusion_deps::fs_var const&);

any FS_VarGet(fusion_deps::fs_var const&);

fusion_deps::fs_var FsVal_ToFsVar(any const& val);
[[maybe_unused]] fusion_deps::fsptr FsPtr_FromFsVar(fusion_deps::fs_var val);

#endif //FUSIONC_FSDEPS_H
