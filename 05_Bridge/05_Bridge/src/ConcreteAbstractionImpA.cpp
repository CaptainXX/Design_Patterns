#include <ConcreteAbstractionImpA.h>

#include <iostream>

ConcreteAbstractionImpA::ConcreteAbstractionImpA() {
    std::cout << "ConcreteAbstractionImpA constructed\n";
}

ConcreteAbstractionImpA::~ConcreteAbstractionImpA() {
    std::cout << "ConcreteAbstractionImpA destructed\n";
}

void ConcreteAbstractionImpA::Init() {
    std::cout << "ImpA Init\n";
}

void ConcreteAbstractionImpA::Connect() {
    std::cout << "ImpA Connect to network\n";
}

void ConcreteAbstractionImpA::Send() {
    std::cout << "ImpA Send to network\n";
}

void ConcreteAbstractionImpA::Close() {
    std::cout << "ImpA Close\n";
}
