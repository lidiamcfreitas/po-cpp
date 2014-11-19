#include "Paragraph.h"

void Paragraph::addImage(Image& i) { _vector.push_back(&i); }

void Paragraph::addSpan(Span& s) { _vector.push_back(&s); }

void Paragraph::render() {
    std::cout << "<p>" << std::endl;
    
    for (std::vector<PageElement*>::iterator it = _vector.begin(); it != _vector.end(); it++){
        std::cout <<"\t";
        (*it)->render();
    }
    std::cout << "</p>" << std::endl;
}
