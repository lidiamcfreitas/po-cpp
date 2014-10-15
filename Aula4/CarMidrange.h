#ifndef __CARMIDRANGE_H__
#define __CARMIDRANGE_H__

#include <iostream>
#include "BasicEngine.h"
#include "BasicCar.h"

class CarMidrange: public BasicCar
{
    public:
        virtual void updateEngine(BasicEngine engine)
            { setEngine(engine); };
};
#endif