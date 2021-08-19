#pragma once

#include <IFactory.h>
#include <memory>

class Communication {
public: 
    Communication(IFactory* factory);
    virtual ~Communication();

    void CommunicationProcess();

protected:
    std::unique_ptr<IFactory> fty;

};
