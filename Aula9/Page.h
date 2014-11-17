#include "PageElement.h"
#include <vector>
#include <iostream>

class Page: public PageElement{
    
    std::vector<PageElement* > _vector;
    
    public:
    
    void addPageElement(PageElement& pe) { _vector.push_back(&pe); }
    
    void render() {
        std::cout << "<page>" << std::endl;
        
        for (std::vector<PageElement*>::iterator it = _vector.begin(); it != _vector.end(); it++){
            std::cout <<"\t";
            (*it)->render();
        }
        std::cout << "</page>" << std::endl;
    }
};
