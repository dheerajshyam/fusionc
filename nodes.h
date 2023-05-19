// Created by Dheeraj Shyam on 16/05/23.

#ifndef FUSIONC_NODES_H
#define FUSIONC_NODES_H

#include <iostream>
#include <fstream>
#include <vector>
#include <any>

#include "fusionBaseVisitor.h"
#include "fusionLexer.h"
#include "fusionParser.h"

using namespace std;

enum NodeType { TO = 1, PARAM = 2, FUNC_CALL = 3, CLASS_OBJ_CREATION = 4, CLASS_MEM_CALL = 5, VAR_VALUE_TYPE = 6, VAR_DECL = 7 };
enum TypeObject { INT = 1, STR = 2 };
enum ParameterType { IDENTIFIER = 1, EXPRESSION = 2 };
enum VarValueType { IDEN = 1, EXPR=2 };

struct Node
{
    NodeType nd_type;
    Node* link;
    vector<Node*> children;
};

struct TypeObjectNode
{
    Node* node;

    any val;
    TypeObject kind;
    int lineno;
    int col;
};

struct ParamNode
{
    Node* node;

    ParameterType type;
    string identifier;
    any param;
};

struct FunctionCallNode
{
    Node* node;

    string name;
    vector<Node*> params;
};

struct ClassObjectNode
{
    Node* node;

    vector<string> parents;
    vector<Node*> params;
};

struct ClassMemberCall
{
    Node* node;

    string identifier;

    Node* class_object;
    Node* func_call;
};

struct VariableValue
{
    Node* node;

    VarValueType type;
    string identifier;
    Node* expr;
};

struct VariableDecl
{
    Node* node;

    string name;
    string type;

    Node* value;
};

#endif //FUSIONC_NODES_H