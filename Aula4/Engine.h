#ifndef __ENGINE_H__
#define __ENGINE_H__

class Engine {
    public:
        Engine() {};
        virtual ~Engine() {};
    
        virtual void on();
        virtual void off();
};

#endif
