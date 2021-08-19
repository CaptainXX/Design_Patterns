#pragma once

class Communicator {
public: 
    Communicator(); 
    virtual ~Communicator();

    virtual void Communicate() = 0;

};
