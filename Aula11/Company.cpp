#include "Company.h"

double Company::accept(FlexyIRS irs){
    return irs.visit(this);
}