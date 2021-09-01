#include <CameraSensor.h>

#include <iostream>

CameraSensor::CameraSensor() {
    std::cout << "CameraSensor constructed\n";
}

CameraSensor::CameraSensor(const CameraSensor& proto) {
    std::cout << "CameraSensor constructed from copy\n";
    this->flag_ = proto.GetFlag();
}

CameraSensor::~CameraSensor() {
    std::cout << "CameraSensor destructed\n";
}

SensorPrototype* CameraSensor::Clone() {
    return new CameraSensor(*this);
}

void CameraSensor::WhoAmI() const {
    std::cout << "I am CameraSensor with flag: " << flag_ << std::endl;
}
