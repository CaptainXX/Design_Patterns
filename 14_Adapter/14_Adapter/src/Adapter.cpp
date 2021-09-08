#include <Adapter.h>

#include <iostream>

Adapter::Adapter(SoftVGA* vga): vga_player_(vga) {
    std::cout << "Adapter constructed\n";
}

Adapter::~Adapter() {
    std::cout << "Adapter destructed\n";
}

void Adapter::PlayFrameAndSound() {
    std::cout << "Play Frame\n";
    vga_player_->Display();
    std::cout << "Play default Sound for VGA\n";
}
