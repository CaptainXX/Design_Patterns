#include <PublisherFactory.h>

#include <iostream>

PublisherFactory::PublisherFactory() {
    std::cout << "PublisherFactory constructed\n";
}

PublisherFactory::~PublisherFactory() {
    std::cout << "PublisherFactory destructed\n";
}

Communicator* PublisherFactory::createCommunicator() {
    return new Publisher;
}
