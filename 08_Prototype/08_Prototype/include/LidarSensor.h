#pragma once

#include <SensorPrototype.h>

class LidarSensor : public SensorPrototype {
public: 
    LidarSensor();
    LidarSensor(const LidarSensor& proto);
    ~LidarSensor();
    virtual SensorPrototype* Clone();
    virtual void WhoAmI() const;

};
