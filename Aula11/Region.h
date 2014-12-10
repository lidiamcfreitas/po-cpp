#ifndef __REGION_H__
#define __REGION_H__

#include "TaxPayer.h"
#include "FlexyIRS.h"
#include "Company.h"

class Region: public TaxPayer{
    
private:
    std::vector<std::shared_ptr<Company>> _people;
    
public:
    
    void addCompany(){
        _people.push_back(new Company());
    }
    
    virtual double accept(FlexyIRS irs);
};
#endif