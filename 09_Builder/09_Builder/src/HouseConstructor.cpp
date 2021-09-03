#include <HouseConstructor.h>

#include <iostream>

HouseConstructor::HouseConstructor(HouseBuilder* b)
    : builder_(b) {
    std::cout << "House Constructor constructed\n";
}

HouseConstructor::~HouseConstructor() {
    std::cout << "House Constructor destructed\n";
}

void HouseConstructor::ConstructHouse() {
    std::cout << "Starting house construction...\n";
    std::cout << "  ";
    builder_->BuildStructure();
    std::cout << "  ";
    builder_->BuildDoor();
    std::cout << "  ";
    builder_->BuildWindow();
    std::cout << "House constructed\n";
}
