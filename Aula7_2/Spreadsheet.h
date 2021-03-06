#ifndef __SPREADSHEET_H__
#define __SPREADSHEET_H__


#include <unordered_map>
#include "String.h"
#include "Integer.h"
#include "DynamicCell.h"
#include "AddStrings.h"
#include <utility>
#include <iostream>

class Spreadsheet{
    
private:
    // used unordered_maps because a matrix of vectors or arrays would
    // take up too much space
    
    std::unordered_map<std::string, String&> _spreadsheetString;
    std::unordered_map<std::string, Integer&> _spreadsheetInteger;
    std::unordered_map<std::string, Cell&> _spreadsheetDCell;
    
    
public:
    
    // void add(String s);
    
    // void add(Integer i);
    
    template <typename T>
    void add(T);
    
    std::string getContent(int line, int column);
    
    bool freePosition(Coordinates _coord);
    
    void print();

    friend std::ostream& operator<<(std::ostream& os, Spreadsheet obj);
    
    std::string toString();
    
    bool freeString(Coordinates _coord);
    
    bool freeInteger(Coordinates _coord);
    
    bool freeDCell(Coordinates _coord);
};

#endif