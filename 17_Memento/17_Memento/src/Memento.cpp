#include <Memento.h>

#include <iostream>

Memento::Memento(const std::string& s)
    : state_(s) {
    std::cout << "Memento constructed\n";
}

std::string Memento::GetState() const {
    return state_;
}

void Memento::SetState(const std::string &s) {
    state_ = s;
}
