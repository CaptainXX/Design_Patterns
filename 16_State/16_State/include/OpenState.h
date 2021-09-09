#pragma once

#include <State.h>

class OpenState : public State {
public: 
    virtual void Accept() override final;
    virtual void Send() override final;

    static OpenState* GetInstance();
    ~OpenState();

private:
    static OpenState* instance_;

    OpenState();
    OpenState(OpenState&) = delete;
    OpenState& operator=(OpenState&) = delete;
};
