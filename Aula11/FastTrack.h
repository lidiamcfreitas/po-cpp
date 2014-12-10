#ifndef __FASTTRACK_H__
#define __FASTTRACK_H__

class FastTrack{
    
    virtual double visit(Person p);
    
    virtual double visit(Company c);
    
    virtual double visit(Region r);
};

#endif