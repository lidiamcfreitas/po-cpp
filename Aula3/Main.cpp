#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;


int main()
{
    animal::Animal bear(2, "Teddy");
    animal::Animal scientist(21, "Koothrappali");
    animal::Animal reptile(1);
    
    cat::Cat sylvester(20, "Sylvester", 9);
    cat::Cat catniss(20, "Pusheen", 999);
    cat::Cat doraemon(21, "Doraemon", 9);

    dog::Dog catDog(3, "CatDog", 4.5);
    dog::Dog beethoven(6, "Beethoven", 6);
    dog::Dog snoopy(1, "Snoopy", 2);

    cout << (reptile==snoopy);
    cout << (sylvester == doraemon);
    cout << (catDog == beethoven);
    cout << (scientist == catniss);
    cout << (catDog == sylvester) << "worked\n";
    cout << (sylvester == catDog) << "worked\n";

    cout << bear << endl;
    cout << doraemon << endl;
    cout << scientist<< endl;
    cout << beethoven << endl;

    scientist.sleep();
    catniss.climb();
    beethoven.bark();
}
