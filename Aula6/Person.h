#ifndef __PERSON_H__
#define __PERSON_H__

#include "Helped.h"
#include "RegionObject.h"

class Person: public RegionObject
{
    public:

    void receiveHelp(int value);
    
    int getHelpReceived();
};

#endif