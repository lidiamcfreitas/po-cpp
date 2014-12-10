#ifndef __I_H__
#define __I_H__

#include "TextFormat.h"
#include "TextItem.h"

class Italic: public TextFormat {

public:
    Italic(TextItem *textItem): TextFormat::TextFormat(textItem, "i"){}
    
};

#endif