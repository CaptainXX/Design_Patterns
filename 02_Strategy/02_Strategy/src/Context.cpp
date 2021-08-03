#include <Context.h>
#include <iostream>

// better to use an abstract factory or singleton to get the instance
Context::Context(const Strategy* s): st(s) {
    std::cout << "Context constructed\n";
}

Context::~Context() {
    std::cout << "Context destructed\n";
}

void Context::DynamicAlgo() {
    std::cout << "Algorithm init\n";
    ContextInterface ci;
    st->SomeAlgorithm(ci);

    std::cout << "Algorithm end\n";
}
