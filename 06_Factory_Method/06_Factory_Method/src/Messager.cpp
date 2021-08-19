#include <Messager.h>

#include <iostream>

Messager::Messager() {
    std::cout << "Messager constructed\n";
}

Messager::~Messager() {
    std::cout << "Messager destructed\n";
}

void Messager::Communicate() {
    std::cout << "Messager communicating...\n";
}
