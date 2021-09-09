#pragma once

#include <State.h>

class WaitState : public State {
public:
    virtual void Accept() override final;
    virtual void Send() override final;

    static WaitState* GetInstance();
    ~WaitState();

private:
    static WaitState* instance_;

    WaitState();
    WaitState(WaitState&) = delete;
    WaitState& operator=(WaitState&) = delete;
};
