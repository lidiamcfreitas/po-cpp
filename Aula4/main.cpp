#include <iostream>
#include "BasicCar.h"
#include "CarMidrange.h"
#include "CarTop.h"
#include "BasicEngine.h"
#include "Xtreme.h"

using namespace std;

int main()
{
    BasicCar c1;
    CarMidrange c2;
    CarTop c3;

    c1.go();
    c2.go();
    c3.go();

    c1.stop();
    c2.stop();
    c3.stop();
   
    BasicEngine e;
    
    c2.updateEngine(e);
    c3.updateEngine(e);

    c2.go();
    c3.go();
    c2.stop();
    c3.stop();

    Xtreme xtra;
    
    c3.addXtra(xtra);
    c3.go();
    c3.stop();

}
