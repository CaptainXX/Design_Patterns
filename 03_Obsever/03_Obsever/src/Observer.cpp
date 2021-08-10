#include <Observer.h>

#include <iostream>

Observer::Observer() {
    std::cout << "Observer constructed\n";
}

Observer::~Observer() {
    std::cout << "Observer destructed\n";
}
