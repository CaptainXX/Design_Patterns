#ifndef OBSERVER_H
#define OBSERVER_H

#include <datastructures.h>

class Subject;

class Observer {
public:
    Observer();
    virtual ~Observer();
    virtual void Update() = 0;
};


#endif
