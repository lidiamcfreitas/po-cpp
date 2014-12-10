#ifndef __TF_H__
#define __TF_H__

#include <string>

class TextFormat: public TextItem {
    
private:
    TextItem *_textItem;
    std::string _xmlTag;
    
public:
    TextFormat(TextItem *textItem, std::string xmlTag) {
        _textItem = textItem;
        _xmlTag = xmlTag;
    }

    virtual std::string render() {
        return "<" + _xmlTag + ">" + _textItem->render() + "</" + _xmlTag + ">";
    }
    
};

#endif