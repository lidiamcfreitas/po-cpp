#include "Cell.h"


void Cell::setAsString() { _id = 1; }

void Cell::setAsInteger() { _id = 0; }

bool Cell::isString() { return _id == 1; }

bool Cell::isInteger() { return _id == 0; }