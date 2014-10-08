#include "Animal.h"
#include "Cat.h"


int main()
{
    animal::Animal lidia(20, "lidia");
    animal::Animal joao(21, "joao");
    animal::Animal unkown(1);
    
    cat::Cat meow(20, "dfg", 9);
    cout << meow << std::endl;
    cout << lidia << std::endl;

}