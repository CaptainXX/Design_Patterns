#pragma once

#include <AbstractionImp.h>

class ConcreteAbstractionImpB : public AbstractionImp {
public: 
    ConcreteAbstractionImpB(); 
    virtual ~ConcreteAbstractionImpB();

    virtual void Init();
    virtual void Connect();
    virtual void Send();
    virtual void Close();
};
