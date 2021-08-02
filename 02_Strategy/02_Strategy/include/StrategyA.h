#ifndef STRATEGY_A_H
#define STRATEGY_A_H

#include <Strategy.h>

class StrategyA : public Strategy {
public:
    virtual void SomeAlgorithm(const ContextInterface&) const;
};

#endif
