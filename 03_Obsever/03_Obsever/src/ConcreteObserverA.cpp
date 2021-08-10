#include <ConcreteObserverA.h>

#include <iostream>

ConcreteObserverA::ConcreteObserverA(CSubjectA* sj): s_(sj) {
    s_->Attach(this);
    std::cout << "CObserverA constructed\n";
}

ConcreteObserverA::~ConcreteObserverA() {
    std::cout << "CObserverA destructed\n";
    s_->Detach(this);
}

void ConcreteObserverA::Update() {
    obj_sta_ = s_->GetState();
    std::cout << "CObserverA's State is " << obj_sta_ << std::endl;

}
