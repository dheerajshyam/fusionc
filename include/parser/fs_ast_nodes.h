#pragma once

#ifndef FUSIONC_FS_AST_NODES_H
#define FUSIONC_FS_AST_NODES_H

#include "fsdeps.h"
#include "antlr4-runtime.h"

namespace fs_ast_nodes {
    class Node {
    public:
        virtual ~Node() = default;
    };

    typedef class Param : public Node {
    public:
        std::string value;
        std::string name;
        std::string type;
    } fsNode_param;

    typedef class FuncCall : public Node {
    public:
        std::string func_name;
        std::vector<fsNode_param*> params;
    } fsNode_funcCall;
}

#endif //FUSIONC_FS_AST_NODES_H
