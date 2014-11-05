#ifndef __CONTENT_H__
#define __CONTENT_H__

#include "Coordinates.h"
#include <string>
#include <iostream>
#include <utility>
#include "Cell.h"

template <class T>
class Content: public Cell{
    
    T _value;
    
    
public:
    
    Content(int line, int column, T value): Cell(line, column), _value(value) {}

    void setValue(T value) { _value = value; }
    
    T getValue() { return _value; }
    
    
};



#endif