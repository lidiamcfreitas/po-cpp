#include <iostream>


class Coordinates
{
private:
    std::pair<int, int> _coordenadas;
    
public:
    Coordinates(int line, int column);
    
    int getLine();
    
    int getColumn();
    
};
