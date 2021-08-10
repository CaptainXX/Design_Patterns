#include <ConcreteObserverB.h>

#include <iostream>

ConcreteObserverB::ConcreteObserverB(CSubjectA* sj): s_(sj) {
    obj_sta_ = sj->GetState();
    s_->Attach(this);
    std::cout << "CObserverB constructed\n";
}

ConcreteObserverB::~ConcreteObserverB() {
    std::cout << "CObserverB destructed\n";
    s_->Detach(this);
}

void ConcreteObserverB::Update() {
    obj_sta_ = s_->GetState();
    std::cout << "\033[1;33mCObserverB's State\033[0m is " << obj_sta_ << std::endl;

}
