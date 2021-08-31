#include <ILidarFactory.h>

#include <iostream>

#include <LidarParser.h>
#include <LidarReceiver.h>

ILidarFactory::ILidarFactory() {
    std::cout << "ILidarFactory constructed\n";
}

ILidarFactory::~ILidarFactory() {
    std::cout << "ILidarFactory destructed\n";
}

Parser* ILidarFactory::CreateParser() {
    return new LidarParser;
}

Receiver* ILidarFactory::CreateReceiver() {
    return new LidarReceiver;
}
