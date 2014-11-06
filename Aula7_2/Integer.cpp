#include "Integer.h"

Integer::Integer(int line, int column, int i): Content(line,column,i) { setAsInteger(); }

std::ostream& operator<<(std::ostream& os, Integer& dt)
{
    os << dt.getCoordinates().toString() << " " << dt.getValue() << std::endl;
    return os;
}