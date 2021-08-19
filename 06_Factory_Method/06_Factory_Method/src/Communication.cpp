#include <Communication.h>

#include <iostream>
#include <memory>

#include <Communicator.h>

Communication::Communication(IFactory* factory):
    fty(factory) {
    std::cout << "Communication constructed\n";
}

Communication::~Communication() {
    std::cout << "Communication destructed\n";
}

void Communication::CommunicationProcess() {
    std::unique_ptr<Communicator> communicator_(fty->createCommunicator());
    std::cout << "\n-------------------\n";
    std::cout << "Communication Start!\n";
    communicator_->Communicate();
    std::cout << "Communication End!\n";
    std::cout << "-------------------\n\n";
}
