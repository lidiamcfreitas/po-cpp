#include <string>
#include <iostream>
#include <sstream>

class Cat{
    
    private:
    std::string _name;
    double _age;
    
    public:
    Cat(std::string name, double age): _name(name), _age(age) {}
    Cat(): Cat("Anónimo", 0) {}
    
    std::string getName() { return _name; }
    
    double getAge() { return _age; }
    
    void setName(std::string name) { _name=name; }
    
    void setAge(int age) { _age=age; }
    
    friend std::ostream & operator<<(std::ostream & out, Cat & cat){
        
        out<< cat.getName() << " " << cat.getAge();
        return out;
    }
    
    friend std::istream & operator>>(std::istream & in, Cat & cat){
        
        in >> cat._name;
        in >> cat._age;
        return in;
        
    }
};

int main() {
    
    // ) cria dois gatos (“Tareco” com 2 anos e “Pantufa” com 6 meses
    Cat c1("Tareco",2);
    Cat c2("Pantufa",0.5);
    
    // escreve os gatos para um std::stringstream
    std::stringstream ss;
    ss << c1 << " " << c2;
    
    // cria dois gatos não inicializados (anonimos)
    Cat ca1;
    Cat ca2;

    // recupera os dois primeiros gatos do stream para os objectos recém criados
    ss >> ca1 >> ca2;

    
    // apresenta-os na saída (std::cout)
    std::cout << ca1 << std::endl << ca2 <<std::endl;
}