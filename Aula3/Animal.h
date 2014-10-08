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
        
        
        virtual void sleep(const Animal animal )
        {
            cout << animal.name() << " is asleep\n";
        }
        
        virtual void print(std::ostream & o) const
            {  o << name() << " is " << age() << " years old"; }


        friend  ostream &operator<<(ostream & o, const Animal &animal)
        {
            animal.print(o);
            return  o;
        }
        
        bool operator==(const Animal &other)
        {
            return _age == other.age() && _name == other.name();
        }
        

        
    };
    
}

