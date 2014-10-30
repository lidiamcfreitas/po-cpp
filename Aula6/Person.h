#ifndef __PERSON_H__
#define __PERSON_H__

#include "Helped.h"

class Person:  public Helped
{
    public:

    void receiveHelp(int value);
    
    int getHelpReceived();
};

#endif