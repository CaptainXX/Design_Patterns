#pragma once

#include <State.h>

class CloseState : public State {
public:
    virtual void Accept() override final;
    virtual void Send() override final;

    static CloseState* GetInstance();
    ~CloseState();

private:
    static CloseState* instance_;

    CloseState();
    CloseState(CloseState&) = delete;
    CloseState& operator=(CloseState&) = delete;
};
