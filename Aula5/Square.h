#include "Transform.h"

class Square: public Transform
{
    public:
    
    Square() = default;
        //Override
        int transform(int value);
};

int Square::transform(int value)
{
    return value*value;
}