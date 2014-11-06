#ifndef __REFSTRING_H__
#define __REFSTRING_H__

#include "Reference.h"

class ReferenceString: Content<std::string>, public Reference{
    
public:
    ReferenceString(int line, int column, String s): Content(line, column, s.getValue()) { setAsString(); }
    
};

#endif