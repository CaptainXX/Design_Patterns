#include <CameraReceiver.h>

#include <iostream>

CameraReceiver::CameraReceiver() {
    std::cout << "CameraReceiver constructed\n";
}

CameraReceiver::~CameraReceiver() {
    std::cout << "CameraReceiver destructed\n";
}

void CameraReceiver::RecvData() {
    std::cout << "CameraReceiver: ";
    std::cout << "receiving data...\n";
}
