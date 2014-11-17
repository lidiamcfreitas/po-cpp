#include "PageElement.h"
#include <iostream>

class Paragraph: public PageElement{
    
    public:
    void render() {
        std::cout << "<span>TEXT</span>" << std::endl;
    }
    
}