#ifndef __STRING_H__
#define __STRING_H__

#include <string>
#include "Content.h"
#include <iostream>

class String: public Content<std::string>{
    
private:

    
public:
    
    String(int line, int column, std::string s): Content(line,column,s) {}
    
    void print() { std::cout << getValue() << std::endl; }
    
    
};

#endif