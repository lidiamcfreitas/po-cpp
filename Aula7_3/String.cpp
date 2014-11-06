#include "String.h"

String::String(int line, int column, std::string s): Content(line,column,s) { setAsString();}