#include <Composite.h>

#include <iostream>

Composite::Composite(std::string n)
    : name_(n) {
    std::cout << "Composite constructed\n";
}

Composite::~Composite() {
    std::cout << "Composite destructed\n";
}

void Composite::add(Component *child) {
    children_.push_back(child);
    std::cout << "Composite: " << name_
              << " added a child.\n";
}

void Composite::remove(Component *child) {
    children_.remove(child);
    std::cout << "Composite: " << name_
              << " removed a child.\n";
}

void Composite::Process() {
    std::cout << "Processing: " << name_ << std::endl;
    for (auto i: children_) {
        i->Process();
    }
}
