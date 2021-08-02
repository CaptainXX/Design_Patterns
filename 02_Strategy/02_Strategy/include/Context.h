#ifndef CONTEXT_H
#define CONTEXT_H

#include <cstdint>

#include <Strategy.h>
#include <ContextInterface.h>

class Context {
public:
    Context(const Strategy* s);
    virtual ~Context();
    void DynamicAlgo();

private:
    const Strategy *st;
};

#endif
