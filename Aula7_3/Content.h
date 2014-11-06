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
    Coordinates _coor;
    
public:
    
    Content(int line, int column, T value): _coor(line, column), _value(value) {}

    void setValue(T value) { _value = value; };
    
    T getValue() { return _value; };
    
    Coordinates getCoordinates() { return _coor; };
    
    void setCoordinates(int line, int column) { _coor(line, column); }
    
};

inline bool operator< (Content<std::string> s1, Content<std::string> s2){ return 0 < 0; }

inline bool operator< (Content<int> s1, Content<int> s2){ return s1.getValue() < s2.getValue(); }

inline bool operator< (Content<int> s1, Content<std::string> s2){ return s1.getValue() < 0; }

inline bool operator< (Content<std::string> s1, Content<int> s2){ return 0 < s2.getValue(); }

#endif