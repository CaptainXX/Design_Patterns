#pragma once

#include <PStream.h>

class NetPStream : public PStream {
public:
    NetPStream();
    virtual ~NetPStream();
    virtual void PrintToPs(std::string s_to_ps);
};
