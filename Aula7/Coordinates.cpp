#include "Coordinates.h"
#include <iostream>

Coordinates::Coordinates(int line, int column) {_coordenadas = std::make_pair(line, column);}

int Coordinates::getLine() { return _coordenadas.first; }

int Coordinates::getColumn() { return _coordenadas.second;}