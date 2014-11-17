#ifndef __SPAN_H__
#define __SPAN_H__

#include "PageElement.h"
#include <iostream>

class Span: public PageElement{
    
    public:
    void render() {
        std::cout << "<span>TEXT</span>" << std::endl;
    }
    
};

#endif