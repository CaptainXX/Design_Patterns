#include <StrategyC.h>

#include <iostream>

void StrategyC::SomeAlgorithm(const ContextInterface & ct) const {
    std::cout << "Conducting StrategyC...\n";
    std::cout << "a * b * c + d = "
              << ct.a * ct.b * ct.c + ct.d
              << std::endl;
    std::cout << "Strategy End\n";
}
