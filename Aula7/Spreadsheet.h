#ifndef __SPREADSHEET_H__
#define __SPREADSHEET_H__

#include "Coordinates.h"
#include "Content.h"
#include <unordered_map>
#include <string>

class Spreadsheet{
    
    std::unordered_map<std::string, Cell *> _spreadsheet;
    
public:
    
    void addCell(Cell& cell) {
        Cell* toBeAdded = &cell;
        _spreadsheet[toBeAdded->getCoordinatesString()] = toBeAdded;

    }
    
    Cell* getPointerCellAtCoordinates(int line, int column){
        Coordinates c(line, column);
        return _spreadsheet[c.toString()];
    };
};

#endif