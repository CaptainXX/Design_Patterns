#include <PStreamDecorator.h>

#include <iostream>

PStreamDecorator::PStreamDecorator(PStream* ps):
    ps_ptr(ps) {
    std::cout << "PStreamDecorator constructed\n";
}

PStreamDecorator::~PStreamDecorator() {
    std::cout << "PStreamDecorator destructed\n";
}
