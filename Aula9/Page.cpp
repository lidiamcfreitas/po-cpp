#include "PageElement.h"
#include <vector>
#include <iostream>

class Page: public PageElement{
    
    std::vector<PageElement> _vector;

    public:
    void render() {
        std::cout << "<page>" << std::endl;

        for (std::vector<PageElement>::iterator it = _vector.begin(); it != _vector.end(); it++)
                (*it).render();
    
        std::cout << "</page>" << std::endl;
    }
};

int main() {
    
    Page p;

    p.render();

}
