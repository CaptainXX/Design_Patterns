#ifndef CONCRETE_OBSERVER_B_H
#define CONCRETE_OBSERVER_B_H

#include <Observer.h>

#include <Subject.h>
#include <CSubjectA.h>

class ConcreteObserverB : public Observer {
public:
    ConcreteObserverB(CSubjectA* sj);
    virtual ~ConcreteObserverB();
    virtual void Update();

private:
    CSubjectA* s_;
    State obj_sta_;

};

#endif
