#pragma once

#include <PStreamDecorator.h>

class PStreamCrypto : public PStreamDecorator {
public:
    PStreamCrypto(PStream* ps);
    virtual ~PStreamCrypto();
    virtual void PrintToPs(std::string s);
};
