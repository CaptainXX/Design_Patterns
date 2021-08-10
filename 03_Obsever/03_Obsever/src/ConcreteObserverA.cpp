#include <ConcreteObserverA.h>

#include <iostream>

ConcreteObserverA::ConcreteObserverA(CSubjectA* sj): s_(sj) {
    obj_sta_ = sj->GetState();
    s_->Attach(this);
    std::cout << "CObserverA constructed\n";
}

ConcreteObserverA::~ConcreteObserverA() {
    std::cout << "CObserverA destructed\n";
    s_->Detach(this);
}

void ConcreteObserverA::Update() {
    obj_sta_ = s_->GetState();
    std::cout << "\033[1;31mCObserverA's State\033[0m is " << obj_sta_ << std::endl;

}
