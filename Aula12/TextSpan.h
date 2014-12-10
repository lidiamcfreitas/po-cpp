#ifndef __TS_H__
#define __TS_H__

#include <string> 

class TextSpan: public TextItem {
    
private: std::string _text;
    
public:
    TextSpan(std::string text) {
        _text = text;
    }

    virtual std::string render() {
        return "<span>" + _text + "</span>";
    }
    
};

#endif