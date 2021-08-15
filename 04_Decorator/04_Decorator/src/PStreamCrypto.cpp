#include <PStreamCrypto.h>

#include <iostream>

PStreamCrypto::PStreamCrypto(PStream* ps):
    PStreamDecorator(ps) {
    std::cout << "PStreamCrypto constructed\n";
}

PStreamCrypto::~PStreamCrypto() {
    std::cout << "PStreamCrypto destructed\n";
}

void PStreamCrypto::PrintToPs(std::string s) {
    std::cout << "Crypto Print start...........\n";
    ps_ptr->PrintToPs(s);
    std::cout << "Crypto Print end.............\n";
}
