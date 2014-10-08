#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

#endif
using namespace std;

namespace animal {
    class Animal {
        int _age;
        string _name;
        
        public:
            Animal(int age, string name = ""): _age(age), _name(name) {}
            
            int age() const { return _age; }
            string name() const { return _name; }

            friend std::ostream &operator<<(ostream &os, Animal const animal) {
                os << animal._name << " is " << animal._age << " years old.";
                return os;
            }

            bool operator==(const Animal &other) {
                return _age == other.age() && _name == other.name();
            }

    };   
}

