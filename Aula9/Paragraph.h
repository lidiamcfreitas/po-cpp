#ifndef __PARAGRAPH_H__
#define __PARAGRAPH_H__

#include "PageElement.h"
#include "Span.h"
#include "Image.h"
#include <vector>
#include <iostream>

class Paragraph: public PageElement{
    
    std::vector<PageElement*> _vector;
    
    public:
    
    void addImage(Image& i) { _vector.push_back(&i); }
    
    void addSpan(Span& s) { _vector.push_back(&s); }
    
    void render() {
        std::cout << "<p>" << std::endl;
        
        for (std::vector<PageElement*>::iterator it = _vector.begin(); it != _vector.end(); it++){
            std::cout <<"\t";
            (*it)->render();
        }
        std::cout << "</p>" << std::endl;
    }
    
};

#endif