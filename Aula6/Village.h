#ifndef __VILLAGE_H__
#define __VILLAGE_H__

#include "Helped.h"
#include "Person.h"
#include "RegionObject.h"
#include <vector>

class Village: public RegionObject
{
    std::vector<Person*> _vector;
    
public:
    void add(Person* person);
    
    void receiveHelp(int help);
    
    int getHelpReceived();
    
    virtual void printHelp();

};

#endif