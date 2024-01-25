#include "fslexer.h"

// State related code starts.
map<string, fusion_dfa::fs_state*> num_states;
map<string, fusion_dfa::fs_state*> str_states;
map<string, fusion_dfa::fs_state*> iden_states;

// Dfa related code starts.
auto* fusion_dfa::FsDfa_BuildNumDfa() {
    // Creating states for dfa.
    fusion_dfa::fs_state *q0, *q1, *q2, *q3;

    q0 = new State(FsVal_ToFsVar(any(string("q0"))));
    q1 = new State(FsVal_ToFsVar(any(string("q1"))));
    q2 = new State(FsVal_ToFsVar(any(string("q2"))));
    q3 = new State(FsVal_ToFsVar(any(string("q3"))));

    // Adding states to map.
    FsState_AddState(num_states,q0);
    FsState_AddState(num_states,q1);
    FsState_AddState(num_states,q2);
    FsState_AddState(num_states,q3);

    // Returning pointer to head of the dfa.
    return q0;
}

auto* fusion_dfa::FsDfa_BuildStringDfa() {
    // Creating states for dfa.
    fusion_dfa::fs_state *q0, *q1, *q2;

    q0 = new State(FsVal_ToFsVar(any(string("q0"))));
    q1 = new State(FsVal_ToFsVar(any(string("q1"))));
    q2 = new State(FsVal_ToFsVar(any(string("q2"))));

    // Adding states to map.
    FsState_AddState(str_states,q0);
    FsState_AddState(str_states,q1);
    FsState_AddState(str_states,q2);

    // Retuning pointer to head of the dfa.
    return q0;
}

auto* fusion_dfa::FsDfa_BuildIdenDfa() {
    // Creating single state for dfa.
    fusion_dfa::fs_state *q0;

    q0 = new State(FsVal_ToFsVar(any(string("q0"))));

    // Adding state to map.
    FsState_AddState(iden_states, q0);

    // Retuning pointer to head of the dfa.
    return q0;
}


// Lexer related code starts.
fusion_lexer::Lexer::Lexer() {
    this->num_head = fusion_dfa::FsDfa_BuildNumDfa();
    this->str_head = fusion_dfa::FsDfa_BuildStringDfa();
    this->iden_head = fusion_dfa::FsDfa_BuildIdenDfa();

    this->keywords = {
        "abstract",
        "allow",
        "and",
        "break",
        "class",
        "const",
        "continue",
        "constructor",
        "decl",
        "define",
        "delete",
        "do",
        "else",
        "end",
        "enum",
        "func",
        "if",
        "ignore",
        "include",
        "inherits",
        "is",
        "isnt",
        "loop",
        "mut",
        "new",
        "not",
        "or",
        "overload",
        "override",
        "then",
        "this",
        "return",
        "__ARGC__",
        "__ARGV__"
    };
}

void fusion_lexer::Lexer::set_code(
        fusion_deps::fs_var const &val) {
    this->source_code = val;
}

vector<fusion_lexer::fs_token*> fusion_lexer::Lexer::get_tokens() {
    return this->tokens;
}

std::string::iterator fusion_lexer::Lexer::lex_num(
    std::string::iterator& it,
        std::string::iterator end) {

    auto token = string("");

    auto* head = this->num_head;
    auto* ptr = head;

    while(it != end && (isnumber(*it) || *it == '.')) {
        auto elem = *it;
        auto state_name = any_cast<string>(
        FS_VarGet(ptr->get_name())
        );

        if(isnumber(elem)) {
            auto transition_name = string("");

            if(state_name == string("q0"))
                transition_name = "q0";
            else if(state_name == string("q1")
                || state_name == string("q3"))
                transition_name = "q3";

            ptr = num_states[transition_name];
        } else if(elem == '.') {
            auto transition_name = string("");

            if(state_name == string("q0"))
                transition_name = "q1";
            else if(state_name == string("q1")
             || state_name == string("q3"))
                transition_name = "q2";
            ptr = num_states[transition_name];
        } else ptr = num_states["q2"];

        if(any_cast<string>(FS_VarGet(
            ptr->get_name())) == string("q2")) {

            auto error_message = string("error: extra '.' "
                "detected while processing float token, in line 1!\n");

            FsIO_Print(stderr,
               FsVal_ToFsVar(any(error_message))
            );

            clean_states(str_states);
            clean_states(num_states);
            clean_states(iden_states);

            exit(1);
        }

        token += elem;

        it++;
    }

    auto* tokobj = new fusion_lexer::fs_token();
    tokobj->type = "NUMBER";
    tokobj->value = token;
    tokobj->lineno = this->lineno;
    tokobj->lexpos = this->lexpos;

    this->tokens.push_back(tokobj);

    return it;
}

std::string::iterator fusion_lexer::Lexer::lex_string(
    std::string::iterator &it,
        std::string::iterator end, bool is_double_quoted) {

    auto token = string("");

    auto *head = (it == end) ? str_states["q1"] : this->str_head;
    auto *ptr = head;

    auto state_name = any_cast<string>(
    FS_VarGet(ptr->get_name())
    );

    while(it != end && state_name != string("q2")) {
        auto elem = *it;

        if((elem == '"' && is_double_quoted)
            || (elem == '\'' && !is_double_quoted)) {
            ptr = str_states["q2"];
            it++;
        } else if(elem == '\\') {

            elem = *(++it);

            switch((int) elem) {
                case((int) '\"'):
                    token += "\"";
                    break;
                case((int) '\''):
                    token += "\'";
                    break;
                case((int) '\\'):
                    token += "\\";
                    break;
                case((int) '\n'):
                    token += "\n";
                    break;
                case((int) 'b'):
                    token += "\b";
                    break;
                case((int) 'n'):
                    token += "\n";
                    break;
                case((int) 'r'):
                    token += "\r";
                    break;
                case((int) 't'):
                    token += "\t";
                    break;
                case((int) 'v'):
                    token += "\v";
                    break;
                case((int) 's'):
                    token += " ";
                    break;
                default:
                    if(isalpha(elem)) {
                        token += "\\";
                        token += elem;
                    }
                    break;
            }

            if((it + 1) == end)  {
                ptr = str_states["q1"];
                state_name = any_cast<string>(
                FS_VarGet(ptr->get_name())
                );
                break;

            } else ptr = str_states["q0"];

            it++;

        } else {

            token += elem;
            it++;

            if(it  == end) {
                ptr = str_states["q1"];
                state_name = any_cast<string>(
                FS_VarGet(ptr->get_name())
                );
                break;
            }
        }

        state_name = any_cast<string>(
        FS_VarGet(ptr->get_name())
        );
    }

    if(state_name == string("q1")) {
        string message;

        if(is_double_quoted) message = "error in line " +
                std::to_string(this->lineno) +  ": unterminated string literal double quote found!\n";
        else message = "error in line " +
               std::to_string(this->lineno) + ": unterminated string literal single quote found!\n";

        FsIO_Print(stderr, FsVal_ToFsVar(
        any(message)
        ));

        clean_states(str_states);
        clean_states(num_states);
        clean_states(iden_states);

        exit(-1);
    }

    auto* tokobj = new fusion_lexer::fs_token();
    tokobj->type = "STRING";
    tokobj->value = token;
    tokobj->lineno = this->lineno;
    tokobj->lexpos = this->lexpos;

    this->tokens.push_back(tokobj);

    return it;
}

std::string::iterator fusion_lexer::Lexer::lex_iden(
    std::string::iterator &it, std::string::iterator end) {

    auto token = string("");

    auto *head =  this->iden_head;
    auto *ptr = head;

    auto state_name = any_cast<string>(
    FS_VarGet(ptr->get_name())
    );

    while(it != end && (isalnum(*it))|| *it == '_') {
        token += *it;
        it++;
    }

    auto* tokobj = new fusion_lexer::fs_token();

    if(std::find(this->keywords.begin(),
    this->keywords.end(),token) != this->keywords.end())
        tokobj->type = "KEYWORD";
    else if(token == string("true") || token == string("false"))
        tokobj->type = "BOOL";
    else if(token == string("nil"))
        tokobj->type = "NIL";
    else tokobj->type = "IDENTIFIER";

    tokobj->value = token;
    tokobj->lexpos = this->lexpos;
    tokobj->lineno = this->lineno;

    this->tokens.push_back(tokobj);

    return it;
}

void fusion_lexer::Lexer::lex(fusion_deps::fs_var const &input) {
    if(input.var_type != fusion_deps::FS_Variable::TypeName::STRING) {
        FsIO_Print(stderr,
            FsVal_ToFsVar(any(string("\nfault: input format unmatched!"))
        ));
        exit(-1);
    }

    auto code = any_cast<string>(FS_VarGet(input));
    auto it = code.begin();
    auto end = code.end();

    while(it != code.end()) {

        this->lexpos = (int) std::distance(
        code.begin(), it);

        if(isnumber(*it) || (
            *it == '.' && isnumber(*(it + 1))
        )) it = this->lex_num(it, code.end());
        else if(*it == '\"' || *it == '\'') {
            auto is_double_quoted = (*it == '"');
            it++;
            it = this->lex_string(it, end, is_double_quoted);
        } else if(isalpha(*it) || *it == '_')
            it = this->lex_iden(it, end);
        else {
            auto* tokobj = new fusion_lexer::fs_token();
            auto elem = *it;

            if(elem == '#') {
                it++;
                while(*it != '\n') it++;
            } else if(elem == '`') {
              it++;
              while(*it != '`')  {
                  it++;
                  if(it == end) {

                      FsIO_Print(stderr, FsVal_ToFsVar(
                      any(string("error: unclosed multi-line comment found in line "
                            + std::to_string(this->lineno)))
                      ));

                      clean_states(str_states);
                      clean_states(num_states);
                      clean_states(iden_states);

                      for(auto const& token_obj : this->tokens)
                          delete token_obj;
                      this->tokens.clear();

                      exit(0);
                  }
              }
              it++;
            } else {
                switch((int) elem) {
                    case((int) ' '):
                        break;

                    case((int) '\n'):
                    case((int) ';'):
                        this->lineno += 1;
                        this->lexpos = 0;

                        tokobj->type = "EOT";
                        tokobj->value = string(1, elem);
                        tokobj->lexpos = this->lexpos;
                        tokobj->lineno = this->lineno;

                        this->tokens.push_back(tokobj);

                        break;

                    case((int) ','):
                    case((int) '('):
                    case((int) ')'):
                    case((int) '['):
                    case((int) ']'):
                    case((int) '{'):
                    case((int) '}'):
                    case((int) '='):
                    case((int) ':'):
                    case((int) '.'):
                        tokobj->type = "SYM";
                        tokobj->value = string(1, elem);
                        tokobj->lexpos = this->lexpos;
                        tokobj->lineno = this->lineno;

                        this->tokens.push_back(tokobj);

                        break;

                    case((int) '+'):
                        tokobj->type = "PLUS";
                        tokobj->value = string(1, elem);
                        tokobj->lexpos = this->lexpos;
                        tokobj->lineno = this->lineno;

                        this->tokens.push_back(tokobj);

                        break;

                    case((int) '-'):
                        if((it + 1) != end && *(it + 1) == '>') {
                            it++;

                            tokobj->type = "RANGE";
                            tokobj->value = string("->");
                            tokobj->lexpos = this->lexpos;
                            tokobj->lineno = this->lineno;
                        } else {
                            tokobj->type = "MINUS";
                            tokobj->value = string(1, elem);
                            tokobj->lexpos = this->lexpos;
                            tokobj->lineno = this->lineno;
                        }

                        this->tokens.push_back(tokobj);

                        break;

                    case((int) '*'):
                        if((it + 1) != end && *(it+1) == '*') {

                            it++;

                            tokobj->type = "POWER";
                            tokobj->value = string("**");
                            tokobj->lexpos = this->lexpos;
                            tokobj->lineno = this->lineno;
                        } else {
                            tokobj->type = "STAR";
                            tokobj->value = string(1, elem);
                            tokobj->lexpos = this->lexpos;
                            tokobj->lineno = this->lineno;
                        }

                        this->tokens.push_back(tokobj);
                        break;

                    case((int) '/'):
                        if((it + 1) != end && *(it+1) == '/') {
                            it++;

                            tokobj->type = "FLOOR";
                            tokobj->value = string("//");
                            tokobj->lexpos = this->lexpos;
                            tokobj->lineno = this->lineno;
                        } else {
                            tokobj->type = "SLASH";
                            tokobj->value = string(1, elem);
                            tokobj->lexpos = this->lexpos;
                            tokobj->lineno = this->lineno;
                        }

                        this->tokens.push_back(tokobj);
                        break;

                    case((int) '%'):
                        tokobj->type = "PERCENT";
                        tokobj->value = string(1, elem);
                        tokobj->lexpos = this->lexpos;
                        tokobj->lineno = this->lineno;

                        this->tokens.push_back(tokobj);
                        break;

                    case((int) '>'):
                        if((it + 1) != end && *(it+1) == '=') {
                            it++;

                            tokobj->type = "GTE";
                            tokobj->value = string(1, elem);
                            tokobj->lexpos = this->lexpos;
                            tokobj->lineno = this->lineno;
                        } else {
                            tokobj->type = "GT";
                            tokobj->value = string(1, elem);
                            tokobj->lexpos = this->lexpos;
                            tokobj->lineno = this->lineno;
                        }

                        this->tokens.push_back(tokobj);
                        break;

                    case((int) '<'):
                        if((it + 1) != end && *(it+1) == '=') {
                            it++;

                            tokobj->type = "LTE";
                            tokobj->value = string(1, elem);
                            tokobj->lexpos = this->lexpos;
                            tokobj->lineno = this->lineno;
                        } else {
                            tokobj->type = "LT";
                            tokobj->value = string(1, elem);
                            tokobj->lexpos = this->lexpos;
                            tokobj->lineno = this->lineno;
                        }

                        this->tokens.push_back(tokobj);
                        break;

                    default:
                        clean_states(str_states);
                        clean_states(num_states);
                        clean_states(iden_states);

                        for(auto const &token : this->tokens)
                            delete token;
                        this->tokens.clear();
                        FsIO_Print(stderr, FsVal_ToFsVar(
                        any(string("error: invalid token '" +
                            std::string(1, elem) + "' found!"))
                        ));
                        exit(1);
                }

                it++;
            }
        }
    }
}

fusion_lexer::Lexer::~Lexer() {
    clean_states(str_states);
    clean_states(num_states);
    clean_states(iden_states);

    for(auto const& tokobj : this->tokens)
        delete tokobj;
    this->tokens.clear();
}