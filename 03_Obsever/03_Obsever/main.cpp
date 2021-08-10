#include <iostream>
#include <list>

#include <CSubjectA.h>
#include <ConcreteObserverA.h>
#include <ConcreteObserverB.h>

using namespace std;

int main()
{
    CSubjectA *bSbj = new CSubjectA;
    std::list<Observer*> obs;
    obs.push_back(new ConcreteObserverA(bSbj));
    obs.push_back(new ConcreteObserverB(bSbj));

    // show observer's init state
    for (auto ob : obs) {
        ob->Update();
    }
    bSbj->SetActivate();
    bSbj->SetDestroy();
    bSbj->SetInit();

    // observer must be deleted before subject do
    // because observer called subject.Detach() in its destructor
    for (auto &ob : obs) {
        delete ob;
    }
    delete bSbj;
    return 0;
}
