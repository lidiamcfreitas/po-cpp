#include <iostream>

#include "TextItem.h"
#include "TextSpan.h"
#include "Bold.h"
#include "Italic.h"
#include "Underline.h"

int main(){
    
    
    TextItem *span1 = new TextSpan("texto 1");
    TextItem *text1 = new Bold(new Italic(span1));
    std::cout << (text1->render()) << std::endl;
    
    TextItem *span2 = new TextSpan("texto 2");
    TextItem *text2 = new Underline(new Bold(new Italic(span2)));
    std::cout << (text2->render()) << std::endl;
    
    delete(span1);
    delete(text1);
    delete(span2);
    delete(text2);
    
}