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
        
        virtual void print(ostream & o) const
        { o << (animal::Animal)*this << " and has " << numLives() << " lives";}
        
        bool operator==(const Cat &cat)
        {
            return (Animal)*this == (Animal)cat &&
                _numLives == cat.numLives();
        }
        
        friend ostream &operator<<(ostream & o, const Cat &cat)
        {
            cat.print(o);
            return  o;
        }
    };


}