#ifndef __SPREADSHEET_H__
#define __SPREADSHEET_H__

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
    
    void addString(String s);
    
    void addInteger(Integer i);
    
    std::string getContent(int line, int column);
    
    bool freePosition(Coordinates _coord);
};

#endif