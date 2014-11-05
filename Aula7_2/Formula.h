#ifndef __FORMULA_H__
#define __FORMULA_H__

#include "Content.h"
#include "String.h"
#include "Integer.h"

template <class T>
class Formula:  public Content<T>{
    
private:
    std::string _firstString = "";
    std::string _secondString = "";
    int _firstInt = 0;
    int _secondInt = 0;
    
public:
    
    Formula<std::string>(int line, int column, String s1, String s2):
    Content<std::string>(line, column, ""), _firstString(s1.getValue()), _secondString(s2.getValue()) {}
    
    Formula<int>(int line, int column, Integer i1, Integer i2):
    Content<int>(line, column, 0), _firstInt(i1.getValue()), _secondInt(i2.getValue()) {}
    
    std::string getFirst() { return _firstString; }
    std::string getSecond() { return _secondString; }
    
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
    
    //virtual void calculate() = 0;
    
};


#endif