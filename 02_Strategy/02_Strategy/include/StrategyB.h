#ifndef STRATEGY_B_H
#define STRATEGY_B_H

#include <Strategy.h>

class StrategyB : public Strategy {
public:
    virtual void SomeAlgorithm(const ContextInterface&) const;
};

#endif
