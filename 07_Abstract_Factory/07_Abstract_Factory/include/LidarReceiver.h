#pragma once
/**
 * @brief Receive information from lidar sensor
*/

#include <Receiver.h>

class LidarReceiver : public Receiver {
public: 
    LidarReceiver();
    virtual ~LidarReceiver();
    virtual void RecvData();

};
