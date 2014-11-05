#include <unordered_map>
#include "String.h"
#include "Integer.h"
#include <utility>
#include <iostream>

class Spreadsheet{
    
private:
    std::unordered_map<std::string, String&> _spreadsheetString;
    std::unordered_map<std::string, Integer&> _spreadsheetInteger;
    
public:
    
    /*template <class T>
    T getValue(T content) { return content.getValue(); } */
    
    void addString(String s) {
        std::string key = s.getCoordinates().toString();
        try {
            _spreadsheetInteger.at(key);
        } catch (const std::out_of_range& e) {
            _spreadsheetString.emplace(key, s);
        }
    }

    void addInteger(Integer i) {
        std::string key = i.getCoordinates().toString();
        try {
            _spreadsheetString.at(key);
            
        } catch (const std::out_of_range& e) {
            _spreadsheetInteger.emplace(key, i);
            return;
        }
        std::cout << "Position occupied " << key << std::endl;
    }
    
    
    std::string getContent(int line, int column){
        Coordinates _coord(line, column);
        std::string key = _coord.toString();
        
        try {
            _spreadsheetInteger.at(key);
        } catch (const std::out_of_range& e) {
            try {
                _spreadsheetString.at(key);
            } catch (const std::out_of_range& i) {
                std::cout << "Cell not initialized" << std::endl;
            }
            return _spreadsheetString.at(key).getValue();
        }
        return std::to_string(_spreadsheetInteger.at(key).getValue());
    }

};