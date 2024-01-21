#ifndef FUSIONC_FS_TYPES
#define FUSIONC_FS_TYPES

#include "fsdeps.h"

namespace fusion_objects {

    typedef enum OBJECT_TYPE {
        STRING
    } fs_obtype;

    // Base for all other fusion objects.

    typedef class Object {
        fs_obtype ob_type;
    } fsobj;

    // Fusion StringObject.

    typedef class StringObject : public Object {
    protected:
        fusion_deps::fs_var var;
    public:
        explicit StringObject(fusion_deps::fs_var const&);
        void _repr_();
    } fs_str;

    void FS_ObjectPrint(Object const& obj);
}


#endif // FUSIONC_FS_TYPES
