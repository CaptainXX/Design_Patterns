#include <WoodHouseBuilder.h>

#include <iostream>


WoodHouseBuilder::WoodHouseBuilder() {
    std::cout << "WoodHouseBuilder Builder constructed\n";
}
WoodHouseBuilder::~WoodHouseBuilder() {
    std::cout << "WoodHouseBuilder Builder destructed\n";
}

void WoodHouseBuilder::BuildStructure() {
    std::cout << "Building wood structure...\n";
}

void WoodHouseBuilder::BuildDoor() {
    std::cout << "Building wood door...\n";
}

void WoodHouseBuilder::BuildWindow() {
    std::cout << "Building wood window...\n";
}
