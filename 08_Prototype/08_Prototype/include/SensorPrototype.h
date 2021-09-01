#pragma once

#include <cstdint>

class SensorPrototype {
public: 
    SensorPrototype(); 
    virtual ~SensorPrototype();
    virtual SensorPrototype* Clone() = 0;
    virtual void WhoAmI() const = 0;

    uint32_t GetFlag() const {
        return flag_;
    }

    void SetFlag(uint32_t f) {
        flag_ = f;
    }

protected:
    uint32_t flag_;

};
