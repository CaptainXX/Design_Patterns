#include <Publisher.h>

#include <iostream>

Publisher::Publisher() {
    std::cout << "Publisher constructed\n";
}

Publisher::~Publisher() {
    std::cout << "Publisher destructed\n";
}

void Publisher::Communicate() {
    std::cout << "Publisher communicating...\n";
}
