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
    
    void addImage(Image& i);
    
    void addSpan(Span& s);
    
    void render();

    
};

#endif