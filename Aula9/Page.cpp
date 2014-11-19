#include "Page.h"


void Page::addPageElement(PageElement& pe) { _vector.push_back(&pe); }

void Page::render() {
    std::cout << "<page>" << std::endl;
    
    for (std::vector<PageElement*>::iterator it = _vector.begin(); it != _vector.end(); it++){
        std::cout <<"\t";
        (*it)->render();
    }
    std::cout << "</page>" << std::endl;
}

