#ifndef __BASICCAR_H__
#define __BASICCAR_H__


#include <iostream>
#include "BasicEngine.h"

using namespace std;

class BasicCar
{
    private:
    BasicEngine _engine;
    
    public:
    BasicCar() { _engine =  BasicEngine::BasicEngine(); }
    virtual ~BasicCar() {};
    
    virtual void go() { _engine.on(); }
    virtual void stop() { _engine.off(); }
    
    BasicEngine getEngine() { return _engine; }
    void setEngine(BasicEngine engine) { _engine = engine; }
    
};

#endif