#include "PageElement.h"
#include <vector>
#include <iostream>

class Page: public PageElement{
    
    std::vector<PageElement* > _vector;
    
    public:
    
    void addPageElement(PageElement& pe);
    
    void render();
    
};
