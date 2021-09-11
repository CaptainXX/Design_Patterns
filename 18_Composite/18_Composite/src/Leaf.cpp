#include <Leaf.h>

#include <iostream>

Leaf::Leaf(std::string n)
    : name_(n) {
    std::cout << "Leaf constructed\n";
}

Leaf::~Leaf() {
    std::cout << "Leaf destructed\n";
}

void Leaf::Process() {
    std::cout << "Processing: " << name_ << std::endl;
}
