#ifndef __ADDSTRINGS_H__
#define __ADDSTRINGS_H__

#include "Formula.h"

class AddStrings: public Formula<std::string>{
    
public:
    AddStrings(int line, int column, String first, String second): Formula<std::string>(line, column, first, second) {
        
        std::string s = first.getValue() + second.getValue();
        setValue(s);
    }
    
};

#endif