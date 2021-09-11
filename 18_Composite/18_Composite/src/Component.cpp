#include <Component.h>

#include <iostream>

Component::Component() {
    std::cout << "Component constructed\n";
}

Component::~Component() {
    std::cout << "Component destructed\n";
}
