#include <iostream>
#include <string>

using namespace std;

namespace animal
{
    
    class Animal
    {
        int _age;
        string _name;
        
        public:
        
        Animal(int age, string name = ""): _age(age), _name(name) {}
            
        int age() const { return _age; }
        string name() const { return _name; }

        friend  ostream &operator<<(ostream &os, const Animal &animal)
        {
            os << animal.name() << " is " << animal.age() << " years old";
            return os;
        }
        
        bool operator==(const Animal &other)
        {
            return _age == other.age() && _name == other.name();
        }
        
        virtual void sleep(const Animal animal )
        {
            cout << animal.name() << " is asleep\n";
        }
        
    };
    
}

