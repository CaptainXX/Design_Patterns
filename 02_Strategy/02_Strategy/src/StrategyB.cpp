#include <StrategyB.h>

#include <iostream>

void StrategyB::SomeAlgorithm(const ContextInterface & ct) const {
    std::cout << "Conducting StrategyB...\n";
    std::cout << "a * b + c * d = "
              << ct.a * ct.b + ct.c * ct.d
              << std::endl;
    std::cout << "Strategy End\n";
}
