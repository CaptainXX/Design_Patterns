#include <LidarSensor.h>

#include <iostream>

LidarSensor::LidarSensor() {
    std::cout << "LidarSensor constructed\n";
}

LidarSensor::LidarSensor(const LidarSensor& proto) {
    std::cout << "LidarSensor constructed from copy\n";
    this->flag_ = proto.GetFlag();
}

LidarSensor::~LidarSensor() {
    std::cout << "LidarSensor destructed\n";
}

SensorPrototype* LidarSensor::Clone() {
    return new LidarSensor(*this);
}

void LidarSensor::WhoAmI() const {
    std::cout << "I am LidarSensor with flag: " << flag_ << std::endl;
}
