#ifndef __XTREME_H__
#define __XTREME_H__

#include "Engine.h"
#include <iostream>

class Xtreme
{
    public:
    Xtreme() {};
    
    virtual void on() { cout << "Xtreme engine on!" << endl; }
    virtual void off() { cout << "Xtreme engine off!" << endl; }
};

#endif