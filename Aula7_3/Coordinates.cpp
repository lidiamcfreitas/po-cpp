#include "Coordinates.h"


Coordinates::Coordinates(int line, int column) {_coordenadas = std::make_pair(line, column);}

int Coordinates::getLine() { return _coordenadas.first; }

int Coordinates::getColumn() { return _coordenadas.second;}

std::string Coordinates::toString() {
    return "(" + std::to_string(getLine()) + "," + std::to_string(getColumn()) + ")";
}

