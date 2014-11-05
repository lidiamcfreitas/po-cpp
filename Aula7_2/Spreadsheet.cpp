#include "Spreadsheet.h"
#include <iostream>

int main() {
    
    Spreadsheet s;
    
    s.addString(String(1,2,"hello"));
    s.addInteger(Integer(1,2,42));
    s.addInteger(Integer(1,5,2));
    
    std::cout << s.getContent(1,2) << std::endl;
    std::cout << s.getContent(1,5) << std::endl;
    std::cout << s.getContent(1,6) << std::endl;
}