#include <WaitState.h>

#include <iostream>

WaitState* WaitState::instance_ = new WaitState();

WaitState* WaitState::GetInstance() {
    return instance_;
}

WaitState::WaitState() {
    std::cout << "WaitState constructed\n";
}

WaitState::~WaitState() {
    std::cout << "WaitState destructed\n";
}

void WaitState::Accept() {
    std::cout << "WaitState::Accept\n";
}

void WaitState::Send() {
    std::cout << "WaitState::Send\n";
}
