#include <iostream>


class Coordinates
{
private:
    std::pair<int, int> _coordenadas;
    
public:
    Coordinates(int line, int column) {_coordenadas = std::make_pair(line, column);}
    
    int getLine() { return _coordenadas.first; }
    
    int getColumn() { return _coordenadas.second;}
    
};
