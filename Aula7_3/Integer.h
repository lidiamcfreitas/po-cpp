#ifndef __INTEGER_H__
#define __INTEGER_H__

#include "Content.h"



class Integer: public Content<int>{
    
public:
    Integer(int line, int column, int i);
    
};

#endif