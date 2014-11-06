#include "String.h"

String::String(int line, int column, std::string s): Content(line,column,s) { setAsString();}

std::ostream& operator<<(std::ostream& os, String& dt)
{
    os << dt.getCoordinates().toString() << " " << dt.getValue() << std::endl;
    return os;
}