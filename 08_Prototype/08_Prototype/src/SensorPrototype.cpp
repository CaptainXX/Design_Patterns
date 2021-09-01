#include <SensorPrototype.h>

#include <iostream>

SensorPrototype::SensorPrototype() {
    flag_ = 0xffffffff;
    std::cout << "SensorPrototype constructed\n";
}

SensorPrototype::~SensorPrototype() {
    std::cout << "SensorPrototype destructed\n";
}
