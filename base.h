// Created by Dheeraj Shyam on 16/05/23.

#ifndef FUSIONC_BASE_H
#define FUSIONC_BASE_H

#endif //FUSIONC_BASE_H

#include "antlr4-runtime.h"
#include "fusionLexer.h"
#include "fusionParser.h"
#include "fusionBaseVisitor.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <any>

using namespace std;

class Visitor : public fusionBaseVisitor
{
public:

};