#ifndef __COORDINATES_H__
#define __COORDINATES_H__

#include <iostream>
#include <string>

class Coordinates
{
private:
    std::pair<int, int> _coordenadas;
    
public:
    Coordinates(int line, int column);
    
    int getLine();
    
    int getColumn();
    
    std::string toString();
    
};

#endif
