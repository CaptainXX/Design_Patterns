#pragma once
/**
 * @brief Sensor information receiver
*/

class Receiver {
public: 
    Receiver();
    virtual ~Receiver();
    virtual void RecvData() = 0;

};
