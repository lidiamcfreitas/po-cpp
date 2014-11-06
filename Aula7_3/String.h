#ifndef __STRING_H__
#define __STRING_H__


#include "Content.h"

class String: public Content<std::string>{
    
public:
    String(int line, int column, std::string s);

    
};

#endif