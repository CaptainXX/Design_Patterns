#pragma once

#include <AbstractionImp.h>

class Abstraction {
public: 
    explicit Abstraction(AbstractionImp* im);
    virtual ~Abstraction();

    virtual void SendMessage() = 0;

protected:
    AbstractionImp* imp;

};
