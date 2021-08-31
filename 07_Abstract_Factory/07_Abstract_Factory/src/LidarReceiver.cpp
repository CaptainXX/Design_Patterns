#include <LidarReceiver.h>
#include <iostream>

LidarReceiver::LidarReceiver() {
    std::cout << "LidarReceiver constructed\n";
}

LidarReceiver::~LidarReceiver() {
    std::cout << "LidarReceiver destructed\n";
}

void LidarReceiver::RecvData() {
    std::cout << "LidarReceiver: ";
    std::cout << "receiving data...\n";
}
