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
}

#endif //FUSIONC_FS_AST_NODES_H
