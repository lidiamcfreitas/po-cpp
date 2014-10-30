#ifndef __REGION_H__
#define __REGION_H__

#include "Helped.h"
#include "Person.h"
#include "Village.h"
#include <vector>



class Region: public Helped
{
    
    std::vector<Helped*> _vector;
    
public:
    
    void add(Helped* element);
    
    void receiveHelp(int help);
    
    int getHelpReceived();
    
    virtual void printHelp();
};

#endif