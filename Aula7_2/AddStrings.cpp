#include "AddStrings.h"

AddStrings::AddStrings(int line, int column, String first, String second): DynamicCell<std::string>(line, column, first, second) {
    
    std::string s = first.getValue() + second.getValue();
    setValue(s);
}