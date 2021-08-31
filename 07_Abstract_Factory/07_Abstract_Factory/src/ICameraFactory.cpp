#include <ICameraFactory.h>

#include <iostream>

#include <CameraParser.h>
#include <CameraReceiver.h>

ICameraFactory::ICameraFactory() {
    std::cout << "ICameraFactory constructed\n";
}

ICameraFactory::~ICameraFactory() {
    std::cout << "ICameraFactory destructed\n";
}

Parser* ICameraFactory::CreateParser() {
    return new CameraParser;
}

Receiver* ICameraFactory::CreateReceiver() {
    return new CameraReceiver;
}
