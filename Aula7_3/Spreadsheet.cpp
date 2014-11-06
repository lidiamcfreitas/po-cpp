#include "Spreadsheet.h"
#include "AddStrings.h"
#include <iostream>
#include "ReferenceString.h"
#include "ReferenceInt.h"
#include "Cell.h"
#include "DynamicCell.h"

bool Spreadsheet::freePosition(Coordinates _coord){
    
    std::string key = _coord.toString();
    
    try {
        _spreadsheetInteger.at(key);
    } catch (const std::out_of_range& e) { // is not in integers
        try {
            _spreadsheetString.at(key);
        } catch (const std::out_of_range& e) { // is not in strings
            return true;
        }
    }
    
    return false;
}

void Spreadsheet::add(String s)
{
    Coordinates _coord = s.getCoordinates();
    std::string key = _coord.toString(); // get key
    
    if (freePosition(_coord))
        _spreadsheetString.emplace(key, s);
    else
        std::cout << "position " << key << " already occupied" << std::endl;
    
}

void Spreadsheet::add(Integer i)
{
    Coordinates _coord = i.getCoordinates();
    std::string key = _coord.toString();
    
    if (freePosition(_coord))
        _spreadsheetInteger.emplace(key, i);
    else
        std::cout << "position " << key << " already occupied" << std::endl;
}

std::string Spreadsheet::getContent(int line, int column)
{
    Coordinates _coord(line, column);
    std::string key = _coord.toString();
    
    if (freePosition(_coord)) {
        return "null: not initialized";
    } else {
        try {
            _spreadsheetInteger.at(key);
        } catch (const std::out_of_range& e) {
            return _spreadsheetString.at(key).getValue();
        }
        return std::to_string(_spreadsheetInteger.at(key).getValue());
    }
}

void Spreadsheet::print() {
    
    std::cout << "This spreadsheet contains:" << std::endl;
    for ( auto it = _spreadsheetInteger.begin(); it != _spreadsheetInteger.end(); ++it )
        std::cout << " " << it->first << ": " << (it->second).getValue() << std::endl;
    for ( auto it = _spreadsheetString.begin(); it != _spreadsheetString.end(); ++it )
        std::cout << " " << it->first << ": " << (it->second).getValue() << std::endl;
    std::cout << std::endl;
    
}


int main() {
    
    Spreadsheet s;
    
    s.add(String(1,2,"hello"));
    s.add(Integer(1,2,42));
    s.add(Integer(1,5,2));
    s.add(String(1,5,"world"));
    
    if (Integer(1,2,42)<Integer(1,4,50)) {
        std::cout << "it works!" << std::endl;
    }
    
    AddStrings as(132,123,String(1,2,"hello"), String(1,5,"world"));
    std::cout << as.getValue() << std::endl;
    
    s.print();
    
    std::cout << s.getContent(1,2) << std::endl;
    std::cout << s.getContent(1,5) << std::endl;
    std::cout << s.getContent(1,6) << std::endl;
}