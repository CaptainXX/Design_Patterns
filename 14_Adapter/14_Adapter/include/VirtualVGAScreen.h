#pragma once

#include <SoftVGA.h>

class VirtualVGAScreen : public SoftVGA {
public: 
    VirtualVGAScreen();
    ~VirtualVGAScreen();
    virtual void Display() override final;

};
