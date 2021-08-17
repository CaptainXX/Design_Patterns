#pragma once

#include <AbstractionImp.h>

class ConcreteAbstractionImpA : public AbstractionImp {
public: 
    ConcreteAbstractionImpA();
    virtual ~ConcreteAbstractionImpA();

    virtual void Init();
    virtual void Connect();
    virtual void Send();
    virtual void Close();
};
