#pragma once

#include <memory>

#include <SoftHDMI.h>
#include <SoftVGA.h>

class Adapter : public SoftHDMI {
public: 
    Adapter(SoftVGA* vga);
    ~Adapter();
    virtual void PlayFrameAndSound() override final;

private:
    std::unique_ptr<SoftVGA> vga_player_;

};
