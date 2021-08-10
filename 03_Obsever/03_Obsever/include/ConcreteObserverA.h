#ifndef CONCRETE_OBSERVER_A_H
#define CONCRETE_OBSERVER_A_H

#include <Observer.h>

#include <Subject.h>
#include <CSubjectA.h>

class ConcreteObserverA : public Observer {
public:
    ConcreteObserverA(CSubjectA* sj);
    virtual ~ConcreteObserverA();
    virtual void Update();

private:
    CSubjectA* s_;
    State obj_sta_;

};

#endif
