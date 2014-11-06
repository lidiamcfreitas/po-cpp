#ifndef __CELL_H__
#define __CELL_H__


class Cell{
    
private:
    int _id = 0;
    
public:
    void setAsString() { _id = 1; }
    
    void setAsInteger() { _id = 0; }
    
    bool isString() { return _id == 1; }
    
    bool isInteger() { return _id == 0; }

};

#endif