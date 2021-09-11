#include <iostream>

#include <Originator.h>
#include <Memento.h>

using namespace std;

int main() {
    cout << "17_Memento" << endl;

    Originator ori;
    Memento m1 = ori.CreateMemento();
    std::cout << "ori's state: " << ori.GetState()
              << std::endl;

    ori.ChangeState();
    std::cout << "ori's state now: " << ori.GetState()
              << std::endl;
    Memento m2 = ori.CreateMemento();

    ori.ChangeState();
    std::cout << "ori's state now: " << ori.GetState()
              << std::endl;

    ori.SetMemento(m1);
    std::cout << "ori set to m1: " << ori.GetState()
              << std::endl;

    ori.SetMemento(m2);
    std::cout << "ori set to m2: " << ori.GetState()
              << std::endl;





    return 0;
}
