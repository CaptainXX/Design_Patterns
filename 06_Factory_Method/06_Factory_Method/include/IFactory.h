#pragma once

#include <memory>

#include <Communicator.h>

class IFactory {
public: 
    IFactory(); 
    virtual ~IFactory();

    virtual Communicator* createCommunicator() = 0;
};
