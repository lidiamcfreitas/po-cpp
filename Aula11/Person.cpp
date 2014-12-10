#include "Person.h"
double Person::accept(FlexyIRS irs){
    return irs.visit(this);
}