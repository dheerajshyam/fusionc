#include "fsdeps.h"

using namespace fusion_deps;

// Fusion variable.

fusion_deps::FS_Variable&
    fusion_deps::FS_Variable::operator = (int val) {
    this->clean();

    this->var_type = INT;
    this->ival = val;

    return *this;
}

fusion_deps::FS_Variable&
    fusion_deps::FS_Variable::operator = (float val) {
    this->clean();

    this->var_type = FLOAT;
    this->fval = val;

    return *this;
}

fusion_deps::FS_Variable&
    fusion_deps::FS_Variable::operator=(long val) {
    this->clean();

    this->var_type = LONG;
    this->lval = val;

    return *this;
}

fusion_deps::FS_Variable&
    fusion_deps::FS_Variable::operator = (bool val) {
    this->clean();

    this->var_type = BOOL;
    this->bval = val;

    return *this;
}

fusion_deps::FS_Variable&
    fusion_deps::FS_Variable::operator = (double val) {
    this->clean();

    this->var_type = DOUBLE;
    this->dval = val;

    return *this;
}

fusion_deps::FS_Variable&
    fusion_deps::FS_Variable::operator = (wchar_t val) {
    this->clean();

    this->var_type = WIDE;
    this->wval = val;

    return *this;
}

fusion_deps::FS_Variable&
    fusion_deps::FS_Variable::operator = (string const& val) {
    this->clean();

    this->var_type = STRING;
    this->str_val = val;

    return *this;
}

void fusion_deps::FS_Variable::clean() {
    this->ival = 0;
    this->fval = 0.0f;
    this->lval = 0L;
    this->fval = false;
    this->dval = 0.0;
    this->wval = '\0';
    this->str_val = "Hello,world!";
}

void clean_states(map<string, fusion_deps::fusion_dfa::fs_state*> states) {
    for(auto const& state : states)
        delete state.second;
    states.clear();
}

void FsState_AddState(
        map<string, fusion_dfa::fs_state*> &states,
        fusion_dfa::fs_state *src) {

    auto state_name = any_cast<string>(FS_VarGet(src->get_name()));
    states[state_name] = src;
}

void FsIO_Print(FILE* io, fusion_deps::fs_var const& var) {

    if(!io) {
        io = stdout;
        fflush(io);
        io = stderr;
        auto message = string("fault: io error detected!\n");
        fwrite(
            (const char*) message.c_str(),
            1,
            message.length(),
            io
        );
        exit(1);
    } else {

        auto prevIO = io;

        if(var.var_type != fusion_deps::
            FS_Variable::TypeName::STRING) {

            io = stdout;
            fflush(io);

            io = stderr;

            auto message = string("fault: io format error detected!\n");
            fwrite(
            (const char*) message.c_str(),
            1,
            message.length(),
            io
            );

            exit(1);
        } else {

            io = stdout;
            fflush(io);

            io = prevIO;

            auto message = any_cast<string>(FS_VarGet(var));
            fwrite(
            (const char*) (message + "\n").c_str(),
            message.length(),
            1,
            io
            );
        }
    }
}

any FS_VarGet(fusion_deps::fs_var const& var) {
    if (var.var_type == fusion_deps::FS_Variable::TypeName::INT) {
        return var.ival;
    } else if (var.var_type == fusion_deps::FS_Variable::TypeName::FLOAT) {
        return var.fval;
    } else if (var.var_type == fusion_deps::FS_Variable::TypeName::LONG) {
        return var.lval;
    } else if (var.var_type == fusion_deps::FS_Variable::TypeName::BOOL) {
        return var.bval;
    } else if (var.var_type == fusion_deps::FS_Variable::TypeName::DOUBLE) {
        return var.dval;
    } else if (var.var_type == fusion_deps::FS_Variable::TypeName::WIDE) {
        return var.wval;
    } else if (var.var_type == fusion_deps::FS_Variable::TypeName::STRING) {
        return var.str_val;
    } else {
        exit(1);
    }

}

// Fusion smart pointer.

fusion_deps::FS_Ptr::FS_Ptr() {
    this->ptr = new fs_var ();
    this->main_ptr = ptr;
}

fusion_deps::fs_var&
    fusion_deps::FS_Ptr::operator*() {
    return *(this->ptr);
}

void fusion_deps::FS_Ptr::set_ptr(
    fusion_deps::fs_var *val) {
    this->ptr = val;
}

[[maybe_unused]] fusion_deps::fs_var *fusion_deps::FS_Ptr::get_ptr() {
    return this->ptr;
}

fusion_deps::FS_Ptr::~FS_Ptr() {
    this->ptr = this->main_ptr;
    this->ptr = nullptr;
    delete this->ptr;
}

fusion_deps::fs_var FsVal_ToFsVar(any const& val) {
    fusion_deps::fs_var var;

    if(val.type() == typeid(int))
        var = any_cast<int>(val);
    else if(val.type() == typeid(float))
        var = any_cast<float>(val);
    else if(val.type() == typeid(long))
        var = any_cast<long>(val);
    else if(val.type() == typeid(bool))
        var = any_cast<bool>(val);
    else if(val.type() == typeid(wchar_t ))
        var = any_cast<wchar_t>(val);
    else var = any_cast<string>(val);

    return var;
}

[[maybe_unused]] fusion_deps::fsptr FsPtr_FromFsVar(
        fusion_deps::fs_var val) {

    fusion_deps::fsptr ptr;
    ptr.set_ptr(&val);

    return ptr;
}