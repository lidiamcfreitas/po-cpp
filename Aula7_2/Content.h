#ifndef __CONTENT_H__
#define __CONTENT_H__

#include "Coordinates.h"
#include <string>
#include <iostream>
#include <utility>

template <class T>
class Content{
    
    T _value;
    Coordinates _coor;
    
public:
    
    Content(int line, int column, T value): _coor(line, column), _value(value) {}

    void setValue(T value) { _value = value; };
    
    T getValue() { return _value; };
    
    Coordinates getCoordinates() { return _coor; };
    
    
};



#endif