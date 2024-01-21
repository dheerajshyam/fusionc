
#include "fsobject.h"

fusion_objects::StringObject::StringObject(
        fusion_deps::fs_var const& val) : Object() {
    this->var = val;
}

void fusion_objects::StringObject::_repr_() {
    
}
