#include <Abstraction.h>

#include <iostream>

Abstraction::Abstraction(AbstractionImp* im):
    imp(im) {
    std::cout << "Abstraction constructed\n";
}

Abstraction::~Abstraction() {
    std::cout << "Abstraction destructed\n";
}
