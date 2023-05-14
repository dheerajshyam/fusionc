#include "PythonInterface/__init__.h"

int main()
{
    auto* python = new PyInterface::Python();

    auto* arg = PyUnicode_FromString("Enter your number: ");
    auto* args = PyTuple_New(1);
    PyTuple_SetItem(args, 0, arg);

    PyObject_Print(python->bltin_method("print", args), stdout, Py_PRINT_RAW);


    return 0;
}