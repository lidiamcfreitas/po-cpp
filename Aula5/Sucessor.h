#include "Transform.h"

class Sucessor: public Transform
{
    public:
    
    Sucessor() = default;
        //Override
        int transform(int value);
};

int Sucessor::transform(int value) {
    return value + 1;
}
