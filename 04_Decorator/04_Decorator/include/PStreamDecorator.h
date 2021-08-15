#pragma once

#include <PStream.h>

class PStreamDecorator : public PStream {
public:
    PStreamDecorator(PStream*);
    virtual ~PStreamDecorator();

protected:
    PStream* ps_ptr;

};
