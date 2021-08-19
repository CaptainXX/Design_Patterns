#pragma once

#include <Communicator.h>

class Messager : public Communicator {
public: 
    Messager();
    virtual ~Messager();

    virtual void Communicate();

};
