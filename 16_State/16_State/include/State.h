#pragma once

class State {
public: 
    State(); 
    virtual ~State();

    virtual void Accept() = 0;
    virtual void Send() = 0;

};
