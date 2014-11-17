#include "PageElement.h"
#include <iostream>

class Image: public PageElement{
    
    public:
    void render() {
        std::cout << "<img src=\"IMG\"/>" << std::endl;
    }
    
}