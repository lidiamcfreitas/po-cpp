#ifndef __IMAGE_H__
#define __IMAGE_H__

#include "PageElement.h"
#include <iostream>

class Image: public PageElement{
    
    public:
    void render() {
        std::cout << "<img src=\"IMG\"/>" << std::endl;
    }
    
};

#endif