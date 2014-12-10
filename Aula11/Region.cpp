#include "Region.h"

double Region::accept(FlexyIRS irs){
    return irs.visit(this);
}
