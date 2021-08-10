#include <iostream>

#include <CSubjectA.h>
#include <ConcreteObserverA.h>

using namespace std;

int main()
{
    CSubjectA *bSbj = new CSubjectA;
    Observer *obs = new ConcreteObserverA(bSbj);

    obs->Update();
    bSbj->SetStateAlgo();

    // observer must be deleted before subject do
    // because observer called subject.Detach() in its destructor
    delete obs;
    delete bSbj;
    return 0;
}
