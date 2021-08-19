#pragma once

#include <IFactory.h>
#include <Messager.h>

class MessagerFactory : public IFactory {
public: 
    MessagerFactory();
    virtual ~MessagerFactory();

    virtual Communicator* createCommunicator();

};
