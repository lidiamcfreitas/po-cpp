#include "Spreadsheet.h"
#include "AddStrings.h"
#include <iostream>

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

void Spreadsheet::addString(String s)
{
    Coordinates _coord = s.getCoordinates();
    std::string key = _coord.toString(); // get key
    
    if (freePosition(_coord))
        _spreadsheetString.emplace(key, s);
    else
        std::cout << "position " << key << " already occupied" << std::endl;
    
}

void Spreadsheet::addInteger(Integer i)
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


int main() {
    
    Spreadsheet s;
    
    s.addString(String(1,2,"hello"));
    s.addInteger(Integer(1,2,42));
    s.addInteger(Integer(1,5,2));
    s.addString(String(1,5,"world"));
    
    AddStrings as(132,123,String(1,2,"hello"), String(1,5,"world"));
    std::cout << as.getValue() << std::endl;
    
    std::cout << s.getContent(1,2) << std::endl;
    std::cout << s.getContent(1,5) << std::endl;
    std::cout << s.getContent(1,6) << std::endl;
}