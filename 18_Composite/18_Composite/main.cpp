#include <iostream>

#include <memory>

#include <Composite.h>
#include <Leaf.h>

using namespace std;

int main() {
    cout << "18_Composite" << endl;

    Composite root("root");
    Composite node1("node1");
    Composite node2("node2");
    Composite node3("node3");
    Leaf leaf1("leaf1");
    Leaf leaf2("leaf2");

    root.add(&node1);
    root.add(&node2);
    node1.add(&node3);
    node1.add(&leaf1);
    node1.add(&leaf2);

    std::cout << "Processing root: \n";
    root.Process();
    std::cout << "Processing node1: \n";
    node1.Process();
    std::cout << "Processing node2: \n";
    node2.Process();

    return 0;
}
