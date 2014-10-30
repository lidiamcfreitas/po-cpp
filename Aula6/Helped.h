#ifndef __HELPED_H__
#define __HELPED_H__

#include <iostream>


class Helped
{
    private:
        int _helpReceived = 0;
    
    
    public:
        int getHelp() { return _helpReceived; }
    
        virtual int getHelpReceived() = 0;
    
        virtual void setHelpReceived(int help)  { _helpReceived += help; }
    
        virtual void resetHelpReceived() { _helpReceived = 0; }
    
        virtual void receiveHelp(int help) = 0;
    
        virtual void printHelp() { std::cout << "Help: " << _helpReceived << std::endl; }
};

#endif