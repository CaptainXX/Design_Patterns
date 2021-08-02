#include <iostream>
#include <vector>

#include <Context.h>
#include <Strategy.h>
#include <StrategyA.h>
#include <StrategyB.h>
#include <StrategyC.h>

using namespace std;

int main()
{
    std::vector<Strategy*> stv;
    stv.push_back(new StrategyA);
    stv.push_back(new StrategyB);
    stv.push_back(new StrategyC);

    for (auto st: stv) {
        Context ct(st);
        ct.DynamicAlgo();
        delete st;
    }
    stv.clear();
    return 0;
}
