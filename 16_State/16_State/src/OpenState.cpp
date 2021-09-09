#include <OpenState.h>

#include <iostream>

OpenState* OpenState::instance_ = new OpenState();

OpenState* OpenState::GetInstance() {
    return instance_;
}

OpenState::OpenState() {
    std::cout << "OpenState constructed\n";
}

OpenState::~OpenState() {
    std::cout << "OpenState destructed\n";
}

void OpenState::Accept() {
    std::cout << "OpenState::Accept\n";
}

void OpenState::Send() {
    std::cout << "OpenState::Send\n";
}
