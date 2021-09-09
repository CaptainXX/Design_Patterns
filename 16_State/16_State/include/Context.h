#pragma once

#include <memory>

#include <State.h>

class Context {
public: 
    Context(State* s);
    void AcceptAndSend();

private:
    std::shared_ptr<State> state_;
};
