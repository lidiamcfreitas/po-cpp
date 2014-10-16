#ifndef __BASICENGINE_H__
#define __BASICENGINE_H__

#include <iostream>
using namespace std;

class BasicEngine
{
    public:
    BasicEngine() {};
    
    virtual void on() { cout << "Basic engine on!" << endl; }
    virtual void off() { cout << "Basic engine off!" << endl; }
};

#endif