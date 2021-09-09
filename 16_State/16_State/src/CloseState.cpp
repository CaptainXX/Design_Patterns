#include <CloseState.h>

#include <iostream>

CloseState* CloseState::instance_ = new CloseState();

CloseState* CloseState::GetInstance() {
    return instance_;
}

CloseState::CloseState() {
    std::cout << "CloseState constructed\n";
}

CloseState::~CloseState() {
    std::cout << "CloseState destructed\n";
}

void CloseState::Accept() {
    std::cout << "CloseState::Accept\n";
}

void CloseState::Send() {
    std::cout << "CloseState::Send\n";
}
