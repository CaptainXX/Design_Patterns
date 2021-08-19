#include <MessagerFactory.h>

#include <iostream>

MessagerFactory::MessagerFactory() {
    std::cout << "MessagerFactory constructed\n";
}

MessagerFactory::~MessagerFactory() {
    std::cout << "MessagerFactory destructed\n";
}

Communicator* MessagerFactory::createCommunicator() {
    return new Messager;
}
