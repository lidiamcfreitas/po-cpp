#ifndef __U_H__
#define __U_H__

#include "TextFormat.h"
#include "TextItem.h"

class Underline: public TextFormat {
    
public:
    Underline(TextItem* textItem): TextFormat::TextFormat(textItem, "u"){}
    
};

#endif