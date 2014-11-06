#include "Spreadsheet.h"
#include "AddStrings.h"
#include "Cell.h"
#include "DynamicCell.h"
#include <iostream>

bool Spreadsheet::freePosition(Coordinates _coord){
    
    std::string key = _coord.toString();
    
    if (freeInteger(_coord)) {
        if (freeString(_coord)) {
            if (freeDCell(_coord)) {
                return true;
            }
        }
    }
    
    return false;
}

template<>
void Spreadsheet::add<String>(String s)
{
    Coordinates _coord = s.getCoordinates();
    std::string key = _coord.toString(); // get key
    
    if (freePosition(_coord))
        _spreadsheetString.emplace(key, s);
    else
        std::cout << "position " << key << " already occupied" << std::endl;
    
}


template<>
void Spreadsheet::add<Integer>(Integer i)
{
    Coordinates _coord = i.getCoordinates();
    std::string key = _coord.toString();
    
    if (freePosition(_coord))
        _spreadsheetInteger.emplace(key, i);
    else
        std::cout << "position " << key << " already occupied" << std::endl;
}

template<>
void Spreadsheet::add<AddStrings>(AddStrings Ds)
{
    Coordinates _coord = Ds.getCoordinates();
    std::string key = _coord.toString(); // get key
    std::string st = Ds.getValue();
    
    if (freePosition(_coord)){
        String s(_coord.getLine(), _coord.getColumn(), st);
        _spreadsheetString.emplace(key, s);}
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
    
    std::cout << this;
    
}

std::ostream& operator<<(std::ostream& os, Spreadsheet obj)
{
    os << obj.toString();
    return os;
}

std::string Spreadsheet::toString(){
    std::string res = "";
    res += "This spreadsheet contains:\n";
    for ( auto it = _spreadsheetString.begin(); it != _spreadsheetString.end(); ++it )
        res += " " + it->first + ": " + (it->second).getValue() + "\n";
    for ( auto it = _spreadsheetInteger.begin(); it != _spreadsheetInteger.end(); ++it )
        res += " " + it->first + ": " + std::to_string((it->second).getValue()) + "\n";
    
    return res;
}

bool Spreadsheet::freeString(Coordinates _coord){
    
    std::string key = _coord.toString();
    
    try {
        _spreadsheetString.at(key);
    } catch (const std::out_of_range& e) {
        return true;
    }
    return false;
}

bool Spreadsheet::freeInteger(Coordinates _coord){
    
    std::string key = _coord.toString();
    
    try {
        _spreadsheetInteger.at(key);
    } catch (const std::out_of_range& e) {
        return true;
    }
    return false;
}

bool Spreadsheet::freeDCell(Coordinates _coord){
    
    std::string key = _coord.toString();
    
    try {
        _spreadsheetDCell.at(key);
    } catch (const std::out_of_range& e) {
        return true;
    }
    return false;
}


int main() {
    
    Spreadsheet s;
    
    String s1(1,2,"hello");
    s.add(s1);
    std::cout << s1;
    
    AddStrings as(1,5,String(1,12,"hello "), String(1,5,"world"));
    std::cout << as.getValue() << std::endl;
    
    
    s.add(Integer(1,2,42));
    s.add(Integer(1,5,2));
    s.add(String(1,5,"world"));
    
    s.add(as);
    
    if (Integer(1,2,42)<Integer(1,4,50)) {
        std::cout << "its working" << std::endl;
    }
    
    std::cout << s;
    
    std::cout << s.getContent(1,2) << std::endl;
    std::cout << s.getContent(1,5) << std::endl;
    std::cout << s.getContent(1,6) << std::endl;
}