#include <iostream>

#include <Abstraction.h>
#include <AbstractionImp.h>
#include <ConcreteAbstractionA.h>
#include <ConcreteAbstractionImpA.h>
#include <ConcreteAbstractionImpB.h>

using namespace std;

int main() {
    AbstractionImp* Aimp = new ConcreteAbstractionImpA;
    AbstractionImp* Bimp = new ConcreteAbstractionImpB;

    Abstraction* abp = new ConcreteAbstractionA(Aimp);
    abp->SendMessage();
    delete abp;

    abp = new ConcreteAbstractionA(Bimp);
    abp->SendMessage();
    delete abp;

    delete Aimp;
    delete Bimp;
    return 0;
}
