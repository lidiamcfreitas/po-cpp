// PRINT

#ifndef __ADDSTRINGS_H__
#define __ADDSTRINGS_H__

#include "DynamicCell.h"

// this is a formula that adds strings: example that formulas are working.
class AddStrings: public DynamicCell<std::string>{
    
public:
    AddStrings(int line, int column, String first, String second);
};

#endif