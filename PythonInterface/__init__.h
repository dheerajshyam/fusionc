
#include <iostream>
#include <Python.h>

using namespace std;

namespace PyInterface
{
    class Python
    {
    public:
        Python();
        static PyObject* _import(string const& name);
    };
}