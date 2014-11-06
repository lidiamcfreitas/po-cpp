#ifndef __INTEGER_H__
#define __INTEGER_H__

#include "Content.h"
#include "Cell.h"



class Integer: public Content<int>, public Cell{
    
public:
    Integer(int line, int column, int i);
    
};

#endif