#ifndef __COMPANY_H__
#define __COMPANY_H__

#include <vector>

#include "TaxPayer.h"
#include "FlexyIRS.h"
#include "Person.h"

class Company: public TaxPayer{
private:
    std::vector<std::shared_ptr<Person>> _people;
    
public:
    
    void addPerson(){
        _people.push_back(new Person());
    }
    
    virtual double accept(FlexyIRS irs);
};

#endif