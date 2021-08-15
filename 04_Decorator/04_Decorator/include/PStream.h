#pragma once

#include <string>

class PStream {
public:
    PStream();
    virtual ~PStream();
    virtual void PrintToPs(std::string) = 0;

};

