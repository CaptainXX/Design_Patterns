#include <PStreamBuffered.h>

#include <iostream>

PStreamBuffered::PStreamBuffered(PStream* ps):
    PStreamDecorator(ps) {
    std::cout << "PStreamBuffered constructed\n";
}

PStreamBuffered::~PStreamBuffered() {
    std::cout << "PStreamBuffered destructed\n";
}

void PStreamBuffered::PrintToPs(std::string s) {
    std::cout << "Buffered Print start.............\n";
    ps_ptr->PrintToPs(s);
    std::cout << "Buffered Print end...............\n";
}
