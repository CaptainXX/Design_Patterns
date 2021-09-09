#include <Context.h>

#include <iostream>

Context::Context(State* s): state_(s) {
    std::cout << "Context constructed\n";
}

void Context::AcceptAndSend() {
    state_->Accept();
    state_->Send();
}
