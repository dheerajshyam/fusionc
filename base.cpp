// Created by Dheeraj Shyam on 16/05/23.

#include "base.h"

any Visitor::visitStart(fusionParser::StartContext *ctx)
{
    auto* root = new Node();
    int index = 0;
    for(const auto& child : ctx->children)
    {
        if(++index == ctx->children.size() - 1) break;

        any result = visit(child);
        if(result.type() == typeid(vector<Node*>))
            root->children[ChildType::VECTOR] = result;
        else if(result.type() == typeid(Node*))
            root->children[ChildType::NODE] = result;
        else {
            cout << result.type().name() << endl;
            delete root;
            return nullptr;
        }
    }
    return root;
}
any Visitor::visitStmt(fusionParser::StmtContext *ctx)
{
    if(ctx->var_decl() != nullptr)
        return visit(ctx->var_decl());
    return nullptr;
}
any Visitor::visitVar_decl(fusionParser::Var_declContext *ctx)
{
    if(ctx->var_value() == nullptr)
        return nullptr;

    if(!(ctx->IDENTIFIER().empty())
        && !(ctx->var_type().empty())) {

        vector<Node*> variables;

        if(ctx->IDENTIFIER().size() == ctx->var_type().size()) {

            size_t size = ctx->IDENTIFIER().size();

            for(int i = 0; i < size; i++) {
                auto* node = new VariableDecl();
                node->name = ctx->IDENTIFIER(i)->getSymbol()->getText();

                if(ctx->var_type(i)->IDENTIFIER() != nullptr)
                    node->type = ctx->var_type(i)->IDENTIFIER()->getSymbol()->getText();
                else
                    node->type = "any";

                any var_value_node = visit(ctx->var_value());
                if(var_value_node.type() == typeid(Node*))
                    node->value = any_cast<Node*>(var_value_node);
                else {
                    delete node;
                    break;
                }

                node->node = new Node();
                node->node->nd_type = NodeType::VAR_DECL;

                variables.push_back(node->node);
            }

            return variables;
        }
        else return nullptr;
    }

    return nullptr;
}
any Visitor::visitVar_type(fusionParser::Var_typeContext *ctx)
{
    if(ctx->IDENTIFIER() != nullptr)
        return ctx->IDENTIFIER()->getSymbol()->getText();
    return nullptr;
}
any Visitor::visitVar_value(fusionParser::Var_valueContext *ctx)
{
    auto* node = new VariableValue();
    int flag = 0;

    if(ctx->IDENTIFIER() != nullptr) {
        node->type = VarValueType::IDEN;
        node->identifier = ctx->IDENTIFIER()->getSymbol()->getText();
    }
    else if(ctx->expr() != nullptr) {
        any expr_node = visit(ctx->expr());
        if(expr_node.type() == typeid(Node*)) {
            node->type = VarValueType::EXPR;
            node->expr = any_cast<Node *>(expr_node);
        } else { flag = 1; }
    }
    else { flag = 1; }

    if(flag) { delete node; return nullptr; }

    node->node = new Node();
    node->node->nd_type = NodeType::VAR_VALUE_TYPE;

    return node->node;
}
any Visitor::visitExpr(fusionParser::ExprContext *ctx)
{
    if(ctx->func_call() != nullptr)
        return this->visit(ctx->func_call());
    else if(ctx->class_ops() != nullptr)
        return this->visit(ctx->class_ops());
    else if(ctx->typeobjects() != nullptr)
        return this->visit(ctx->typeobjects());
    return nullptr;
}
any Visitor::visitClass_ops(fusionParser::Class_opsContext *ctx)
{
    if(ctx->class_object_creation() != nullptr)
        return visit(ctx->class_object_creation());
    else if(ctx->class_member_call() != nullptr)
        return visit(ctx->class_member_call());
    return nullptr;
}
any Visitor::visitClass_member_call(fusionParser::Class_member_callContext *ctx)
{
    auto* node = new ClassMemberCall();

    if(ctx->IDENTIFIER() != nullptr)
        node->identifier = ctx->IDENTIFIER()->getSymbol()->getText();

    else if(ctx->class_object_creation() != nullptr) {
        any class_obj_node = visit(ctx->class_object_creation());
        if(class_obj_node.type() == typeid(Node*))
            node->class_object = any_cast<Node*>(class_obj_node);
    }

    if(ctx->func_call() != nullptr) {
        any func_call_node = visit(ctx->func_call());
        if(func_call_node.type() == typeid(Node*))
            node->func_call = any_cast<Node*>(func_call_node);
    }

    node->node = new Node();
    node->node->nd_type = NodeType::CLASS_MEM_CALL;

    return node->node;
}
any Visitor::visitClass_object_creation(fusionParser::Class_object_creationContext *ctx)
{
    if(ctx->class_hierarchy() != nullptr) {
        auto* node = new ClassObjectNode();
        any parents = visit(ctx->class_hierarchy());
        if(parents.type() == typeid(vector<string>)) {
            node->parents = any_cast<vector<string>>(parents);
            if(ctx->params() != nullptr) {
                any params = visit(ctx->params());
                if(params.type() == typeid(vector<Node*>))
                   node->params = any_cast<vector<Node*>>(params);
            }

            node->node = new Node();
            node->node->nd_type = NodeType::CLASS_OBJ_CREATION;

            return node->node;
        }
        else { delete node; }
    }
    return nullptr;
}
any Visitor::visitClass_hierarchy(fusionParser::Class_hierarchyContext *ctx)
{
    vector<string> parents;
    int flag = 0;

    for(const auto& class_name : ctx->IDENTIFIER()) {
        if(class_name == nullptr) {
            flag = 1;
            parents.clear();
            break;
        }
        parents.push_back(class_name->getSymbol()->getText());
    }
    if(!flag)
        return parents;
    return nullptr;
}
any Visitor::visitFunc_call(fusionParser::Func_callContext *ctx)
{
    if(ctx->params() != nullptr) {
        auto* node = new FunctionCallNode();
        node->name = ctx->IDENTIFIER()->getSymbol()->getText();

        any params = visit(ctx->params());
        if(params.type() == typeid(vector<Node*>)) {
            node->params = any_cast<vector<Node *>>(params);
            node->node = new Node();
            node->node->nd_type = NodeType::FUNC_CALL;

            return node->node;
        }
        else { delete node; }
    }
    return nullptr;
}
any Visitor::visitParams(fusionParser::ParamsContext *ctx)
{
    vector<Node*> nodes;
    int flag = 0;

    for(const auto& param : ctx->param()) {
        any node = visit(param);
        if(node.type() == typeid(ParamNode*))
            nodes.push_back(any_cast<ParamNode *>(node)->node);
        else { flag = 1; nodes.clear(); break; }
    }
    if(!flag)
        return nodes;
    return nullptr;
}
any Visitor::visitParam(fusionParser::ParamContext *ctx)
{
    auto* node = new ParamNode();

    if(ctx->IDENTIFIER() != nullptr) {
        node->type = ParameterType::IDENTIFIER;
        node->identifier = ctx->IDENTIFIER()->getSymbol()->getText();
    }
    if(ctx->expr() != nullptr) {
        node->type = ParameterType::EXPRESSION;
        node->param = this->visit(ctx->expr());
    }

    node->node = new Node();
    node->node->nd_type = NodeType::PARAM;

    return node;
}
any Visitor::visitTypeobjects(fusionParser::TypeobjectsContext *ctx)
{
    vector<Node*> nodes;
    int flag = 0;

    for(const auto& typeobject : ctx->typeobject()) {
        any node = visit(typeobject);
        if(node.type() == typeid(TypeObjectNode*))
            nodes.push_back(any_cast<TypeObjectNode *>(node)->node);
        else { flag = 1; nodes.clear(); break; }
    }

    if(!flag)
        return nodes;
    return nullptr;
}
any Visitor::visitTypeobject(fusionParser::TypeobjectContext *ctx)
{
    auto* node = new TypeObjectNode();

    if(ctx->STR() != nullptr) {
        node->kind = TypeObject::STR;
        node->val = ctx->STR()->getSymbol()->getText();
        node->lineno = static_cast<int>(ctx->STR()->getSymbol()->getLine());
        node->col = static_cast<int>(ctx->STR()->getSymbol()->getCharPositionInLine());
    }
    else if(ctx->INT() != nullptr) {
        node->kind = TypeObject::INT;
        node->val = ctx->INT()->getSymbol()->getText();
        node->lineno = static_cast<int>(ctx->INT()->getSymbol()->getLine());
        node->col = static_cast<int>(ctx->INT()->getSymbol()->getCharPositionInLine());
    }

    node->node = new Node();
    node->node->nd_type = NodeType::TO;

    return node;
}