#pragma once

#include <PStreamDecorator.h>

class PStreamBuffered : public PStreamDecorator {
public:
    PStreamBuffered(PStream *ps);
    virtual ~PStreamBuffered();
    virtual void PrintToPs(std::string s);
};
