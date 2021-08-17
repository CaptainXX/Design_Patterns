#include <ConcreteAbstractionImpB.h>

#include <iostream>

ConcreteAbstractionImpB::ConcreteAbstractionImpB() {
    std::cout << "ConcreteAbstractionImpB constructed\n";
}

ConcreteAbstractionImpB::~ConcreteAbstractionImpB() {
    std::cout << "ConcreteAbstractionImpB destructed\n";
}

void ConcreteAbstractionImpB::Init() {
    std::cout << "ImpB Init\n";
}

void ConcreteAbstractionImpB::Connect() {
    std::cout << "ImpB Connect to network\n";
}

void ConcreteAbstractionImpB::Send() {
    std::cout << "ImpB Send to network\n";
}

void ConcreteAbstractionImpB::Close() {
    std::cout << "ImpB Close\n";
}
