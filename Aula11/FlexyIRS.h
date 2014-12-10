#ifndef __FLEXYIRS_H__
#define __FLEXYIRS_H__


class FlexyIRS{
    
    virtual double visit(Person p)=0;
    virtual double visit(Region r)=0;
    virtual double visit(Company c)=0;
    
};

#endif