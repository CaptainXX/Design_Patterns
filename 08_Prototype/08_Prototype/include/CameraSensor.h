#pragma once

#include <SensorPrototype.h>

class CameraSensor : public SensorPrototype {
public: 
    CameraSensor();
    CameraSensor(const CameraSensor& proto);
    ~CameraSensor();
    virtual SensorPrototype* Clone();
    virtual void WhoAmI() const;

};
