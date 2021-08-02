#include <StrategyA.h>

#include <iostream>

void StrategyA::SomeAlgorithm(const ContextInterface & ct) const {
    std::cout << "Conducting StrategyA...\n";
    std::cout << "a + b * c + d = "
              << ct.a + ct.b * ct.c + ct.d
              << std::endl;
    std::cout << "Strategy End\n";
}
