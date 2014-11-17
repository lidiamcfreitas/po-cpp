#include "Image.h"
#include "Page.h"
#include "PageElement.h"
#include "Paragraph.h"
#include "Span.h"

int main(){
    
    Page p;
    Image i;
    Paragraph par1;
    Paragraph par2;
    Span s;
    
    par1.addSpan(s);
    par1.addSpan(s);
    par2.addImage(i);
    p.addPageElement(par1);
    p.addPageElement(par2);
    
    p.render();
    
    
}