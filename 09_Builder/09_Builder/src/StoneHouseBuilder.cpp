#include <StoneHouseBuilder.h>

#include <iostream>

StoneHouseBuilder::StoneHouseBuilder() {
    std::cout << "StoneHouse Builder constructed\n";
}

StoneHouseBuilder::~StoneHouseBuilder() {
    std::cout << "StoneHouse Builder destructed\n";
}

void StoneHouseBuilder::BuildStructure() {
    std::cout << "Building stone structure...\n";
}

void StoneHouseBuilder::BuildDoor() {
    std::cout << "Building stone door...\n";
}

void StoneHouseBuilder::BuildWindow() {
    std::cout << "Building stone window...\n";
}

