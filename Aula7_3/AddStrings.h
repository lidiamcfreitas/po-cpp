#ifndef __ADDSTRINGS_H__
#define __ADDSTRINGS_H__

#include "DynamicCell.h"

class AddStrings: public DynamicCell<std::string>{
    
public:
    AddStrings(int line, int column, String first, String second): DynamicCell<std::string>(line, column, first, second) {
        
        std::string s = first.getValue() + second.getValue();
        setValue(s);
    }
    
};

#endif