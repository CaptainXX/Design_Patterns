#ifndef STRATEGY_H
#define STRATEGY_H

#include <ContextInterface.h>

class Strategy {
public:
    Strategy();
    virtual ~Strategy();
    virtual void SomeAlgorithm(const ContextInterface&) const = 0;
};

#endif
