#ifndef __REFINT_H__
#define __REFINT_H__

#include "Reference.h"

class ReferenceInt: Content<int>, public Reference{
    
public:
    ReferenceInt(int line, int column, Integer i): Content(line, column, i.getValue()) { }
    
};

#endif