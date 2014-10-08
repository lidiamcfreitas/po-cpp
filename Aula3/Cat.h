#include <iostream>
#include <string>

using namespace std;


namespace cat  {

    class Cat: public animal::Animal
    {
        int _numLives;
        
    public:
        
        Cat(int age, string name, int numLives):
            animal::Animal(age, name), _numLives(numLives) {}
        
        int numLives() const {  return _numLives; }
        
        virtual void climb() { cout << "Cat " << name() << " is climbing\n"; }
        
        bool operator==(const Cat &other)
        {
            return this->operator==(other) && _numLives == other.numLives();
        }
        
        friend ostream &operator<<(ostream &os, const Cat &cat)
        {
            animal::Animal a(cat.age(), cat.name());
            os << a << " and has " << cat.numLives() << " lives\n";
            return os;
        }
    };


}