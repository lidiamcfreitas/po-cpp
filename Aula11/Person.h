#ifndef __PERSON_H__
#define -_PERSON_H__

#include "TaxPayer.h"
#include "FlexyIRS.h"

class Person: public TaxPayer{
    
public:
    virtual double accept(FlexyIRS irs);
};

#endif