#ifndef SUBJECT_H
#define SUBJECT_H

#include <Observer.h>

#include <list>

class Subject {
public:
    Subject();
    virtual ~Subject();
    void Notify();
    void Attach(Observer* o);
    void Detach(Observer* o);

private:
    std::list<Observer*> ob_v;
};

#endif
