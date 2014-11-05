#ifndef __CELL_H__
#define __CELL_H__

#include <string>
#include "Coordinates.h"

class Cell{
private:
    
    Coordinates _coor;
    bool _isString = false;
    
public:
    
    Cell(int line, int column): _coor(line, column) {}
    
    bool isString() { return _isString; }
    
    void setAsString() { _isString = true; }
    
    Coordinates getCoordinates() { return _coor; }
    
    std::string getCoordinatesString() {
        return _coor.toString();
    }
    
    
    
};

#endif