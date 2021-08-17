#include <ConcreteAbstractionA.h>

#include <iostream>

ConcreteAbstractionA::ConcreteAbstractionA(AbstractionImp* im):
    Abstraction(im) {
    std::cout << "ConcreteAbstractionA constructed\n";
}

ConcreteAbstractionA::~ConcreteAbstractionA() {
    std::cout << "ConcreteAbstractionA destructed\n";
}

void ConcreteAbstractionA::SendMessage() {
    std::cout << "Calling ConcreteAbstractionA::SendMessage\n";
    imp->Init();
    imp->Connect();
    imp->Send();
    imp->Close();
    std::cout << "Ending ConcreteAbstractionA::SendMessage\n";
}
