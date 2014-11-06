#ifndef __DynamicCell_H__
#define __DynamicCell_H__

#include "Content.h"
#include "String.h"
#include "Integer.h"

template <class T>
class DynamicCell:  public Content<T>, public Cell{ // used for references and formulas
    
private:
    std::string _firstString = "";
    std::string _secondString = "";
    int _firstInt = 0;
    int _secondInt = 0;
    
public:
    
    // for formulas with 2 Strings
    DynamicCell<std::string>(int line, int column, String s1, String s2):
    Content<std::string>(line, column, ""), _firstString(s1.getValue()), _secondString(s2.getValue()) {}
    
    // for formulas with 2 Integers
    DynamicCell<int>(int line, int column, Integer i1, Integer i2):
    Content<int>(line, column, 0), _firstInt(i1.getValue()), _secondInt(i2.getValue()) {}
    
    
    // REFERENCES
    DynamicCell<std::string>(int line, int column, String s):
    Content<std::string>(line, column, ""), _firstString(s.getValue()) {}
    
    DynamicCell<int>(int line, int column, Integer i):
    Content<int>(line, column, 0), _firstInt(i.getValue()) {}
    
    // getters
    template <typename C>
    C getFirst() {
        if (std::is_same<C, int>::value)
            return _firstInt;
        return _firstString;
    }
    
    template <typename C>
    C getSecond() {
        
        if (std::is_same<C, int>::value)
            return _secondInt;
        return _secondString;
    }

    
};

#endif