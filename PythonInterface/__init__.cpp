#include "__init__.h"

PyInterface::Python::Python()
{
    Py_Initialize();
}

PyObject* PyInterface::Python::import(string const& name)
{
    PyObject* decoded = PyUnicode_DecodeFSDefault(name.c_str());
    PyObject* mod = PyImport_Import(decoded);
    Py_DecRef(decoded);
    return mod;
}