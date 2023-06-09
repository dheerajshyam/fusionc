// Created by Dheeraj Shyam on 16/05/23.

#ifndef FUSIONC_INIT_H
#define FUSIONC_INIT_H

#pragma once

#include <iostream>
#include <vector>
#include <Python.h>

using namespace std;

namespace PyInterface
{
    // Declaring class for use in Python class.
    class PyModule;

    // Creating Python class.

    class Python
    {
    private:
        vector<PyObject*> refs;
    public:
        Python();
        ~Python();
        static PyModule* _import(string const& name);
        PyObject* bltin_method(const string& method_name, PyObject* args);
    };

    // Creating PyModule class.

    class PyModule : public Python
    {
    private:
        PyObject* _mod;
        vector<PyObject*> refs;
    public:
        explicit PyModule(PyObject* mod) : _mod(mod) { refs.push_back(_mod); };
        ~PyModule();
        PyObject* method(const string& method_name, PyObject* args);
    };
}

#endif