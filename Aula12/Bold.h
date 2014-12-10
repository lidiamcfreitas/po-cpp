#ifndef __B_H__
#define __B_H__

#include "TextFormat.h"
#include "TextItem.h"

class Bold: public TextFormat {
    
public:
    Bold(TextItem* textItem): TextFormat::TextFormat(textItem, "b") {}
    
};

#endif