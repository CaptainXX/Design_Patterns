#pragma once

#include <Communicator.h>

class Publisher : public Communicator{
public: 
    Publisher();
    virtual ~Publisher();

    virtual void Communicate();

};
