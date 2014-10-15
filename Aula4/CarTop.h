#include <iostream>
#include "CarMidrange.h"
#include "Xtreme.h"

class CarTop: public CarMidrange
{
    private:
        Xtreme _xtra;
        int _hasXtra = 0;
    
    public:
        CarTop() { CarMidrange::CarMidrange(); }
    
    virtual void go()
    {
        CarMidrange::go();
        if (_hasXtra == 1)
        _xtra.on();
    }
    
    virtual void stop()
    {
        CarMidrange::stop();
        if (_hasXtra == 1)
        _xtra.off();
    }
    
    virtual void addXtra(Xtreme engine)
    {
        _xtra = engine;
        _hasXtra = 1;
    }
};
