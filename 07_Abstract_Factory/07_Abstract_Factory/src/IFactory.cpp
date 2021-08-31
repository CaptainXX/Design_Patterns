#include <IFactory.h>

#include <iostream>

IFactory::IFactory() {
    std::cout << "IFactory constructed\n";
}

IFactory::~IFactory() {
    std::cout << "IFactory destructed\n";
}
