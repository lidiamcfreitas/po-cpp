//PRINT

#ifndef __CELL_H__
#define __CELL_H__


class Cell{
    
private:
    int _id = 0;
    
public:
    
    virtual ~Cell() {}
    
    void setAsString();
    
    void setAsInteger();
    
    bool isString();
    
    bool isInteger();

};

#endif