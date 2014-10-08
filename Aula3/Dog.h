#include <iostream>
#include <string>

using namespace std;

namespace dog{
    
    class Dog: public animal::Animal
    {
        double _weight;
        
    public:
        Dog(int age, string name, double weight):
            animal::Animal(age, name), _weight(weight) {}
        
        double weight() const { return _weight; }
        
        virtual void bark() { cout << "Dog " << name() << " is barking\n"; }
        
        virtual void print(ostream & o) const
        { o << (animal::Animal)*this << " and weights " << weight(); }
        
        bool operator=(const Dog &dog)
        {
            return (Animal)*this == (Animal)dog &&
                _weight == dog.weight();
        }
        
        friend ostream &operator<<(ostream & o, const Dog &dog)
        {
            dog.print(o);
            return  o;
        }
    };
    
}

