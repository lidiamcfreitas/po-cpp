
#include "Content.h"

class Integer: public Content<int>{
public:
    Integer(int line, int column, int i): Content(line,column,i) {}
};