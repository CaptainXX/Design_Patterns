#include <State.h>

#include <iostream>

State::State() {
    std::cout << "State constructed\n";
}

State::~State() {
    std::cout << "State destructed\n";
}
