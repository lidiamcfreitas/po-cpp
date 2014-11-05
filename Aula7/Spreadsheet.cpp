#include "Spreadsheet.h"
#include <iostream>
#include "String.h"

/*void Spreadsheet::addCell(Cell& cell) {

}


 Cell Spreadsheet::getCellAtCoordinates(int line, int column){

}*/


int main() {

    String s(1,2,"hello");
    s.print();
    
    Spreadsheet spreadsheet;
    
    spreadsheet.addCell(s);
    
    Cell* p = spreadsheet.getPointerCellAtCoordinates(1,2);
    
    std::cout << (*p).getCoordinates().toString();
    
    return 0;
}