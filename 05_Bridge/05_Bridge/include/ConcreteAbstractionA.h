#pragma once

#include <Abstraction.h>

class ConcreteAbstractionA : public Abstraction {
public: 
    explicit ConcreteAbstractionA(AbstractionImp *im);
    virtual ~ConcreteAbstractionA();

    virtual void SendMessage();

};
