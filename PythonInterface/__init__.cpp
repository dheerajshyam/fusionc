#include "__init__.h"

// Python class

PyInterface::Python::Python() { Py_Initialize(); }
PyInterface::Python::~Python()
{
    for(auto & ref : refs) Py_DecRef(ref);
    Py_Finalize();
}

PyInterface::PyModule* PyInterface::Python::_import(string const& name)
{
    auto* mod = PyImport_ImportModule(name.c_str());
    if(mod == nullptr) {
        PyErr_Print();
        return nullptr;
    }
    return new PyInterface::PyModule(mod);
}

PyObject* PyInterface::Python::bltin_method(const string& method_name, PyObject* args)
{
    if(args != nullptr)
        refs.push_back(args);

    auto* builtins = PyImport_ImportModule("builtins");
    if(builtins != nullptr)
    {
        refs.push_back(builtins);

        auto *func = PyObject_GetAttrString(builtins, method_name.c_str());
        if (func == nullptr || !PyCallable_Check(func)) {
            PyErr_Print();
            return nullptr;
        }
        refs.push_back(func);

        auto *result = PyObject_CallObject(func, args);
        if (result == nullptr) {
            PyErr_Print();
            return nullptr;
        }
        refs.push_back(result);
        return result;
    }
    else
        return nullptr;
}

// PyModule class

PyInterface::PyModule::~PyModule() { for(auto & ref : refs) Py_DecRef(ref); }
PyObject* PyInterface::PyModule::method(const string& method_name, PyObject* args)
{
    if(args != nullptr)
        refs.push_back(args);

    auto* func = PyObject_GetAttrString(_mod, method_name.c_str());
    if(!func || !PyCallable_Check(func)) {
        PyErr_Print();
        return nullptr;
    }
    refs.push_back(func);

    auto *result = PyObject_CallObject(func, args);
    if (!result) {
        PyErr_Print();
        return nullptr;
    }
    refs.push_back(result);
    return result;
}