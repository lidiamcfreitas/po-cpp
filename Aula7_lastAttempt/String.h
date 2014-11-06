#ifndef __STRING_H__
#define __STRING_H__


#include "Content.h"
#include "Cell.h"

class String: public Content<std::string>, public Cell{
    
public:
    String(int line, int column, std::string s);
    
    
};

#endif