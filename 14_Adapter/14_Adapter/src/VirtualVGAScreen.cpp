#include <VirtualVGAScreen.h>

#include <iostream>

VirtualVGAScreen::VirtualVGAScreen() {
    std::cout << "VirtualVGAScreen constructed\n";
}

VirtualVGAScreen::~VirtualVGAScreen() {
    std::cout << "VirtualVGAScreen destructed\n";
}

void VirtualVGAScreen::Display() {
    std::cout << "\033[1;32m";
    std::cout << "Virtual VGA Screen is displaying\n";
    std::cout << "\033[0m";
}
