#include "Animal.h"
#include "Cat.h"
#include "Dog.h"


int main()
{
    animal::Animal lidia(20, "lidia");
    animal::Animal joao(21, "joao");
    animal::Animal unkown(1);
    
    cat::Cat meow(20, "lidia", 9);
    cat::Cat meoww(20, "lidia", 9);
    cat::Cat mew(21, "lala", 9);
    cout << (meow==mew);
    cout << meow << std::endl;
    cout << lidia << std::endl;
    cout << (meow == meoww);
    
    dog::Dog woff(10, "wof", 1.2);
    cout << woff;
    

}