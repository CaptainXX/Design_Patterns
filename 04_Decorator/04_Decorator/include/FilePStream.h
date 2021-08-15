#pragma once

#include <PStream.h>

class FilePStream : public PStream {
public:
    FilePStream();
    virtual ~FilePStream();
    virtual void PrintToPs(std::string s_to_ps);
};
