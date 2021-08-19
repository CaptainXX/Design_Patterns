#pragma once

#include <IFactory.h>
#include <Publisher.h>

class PublisherFactory : public IFactory {
public: 
    PublisherFactory();
    virtual ~PublisherFactory();

    virtual Communicator* createCommunicator();

};
