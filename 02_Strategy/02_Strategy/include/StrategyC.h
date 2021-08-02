#ifndef STRATEGY_C_H
#define STRATEGY_C_H

#include <Strategy.h>

class StrategyC : public Strategy {
public:
    virtual void SomeAlgorithm(const ContextInterface&) const;
};

#endif
