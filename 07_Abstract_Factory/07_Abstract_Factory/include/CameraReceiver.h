#pragma once
/**
 * @brief Receive information from camera sensor
*/

#include <Receiver.h>

class CameraReceiver : public Receiver {
public: 
    CameraReceiver();
    virtual ~CameraReceiver();
    virtual void RecvData();

};
