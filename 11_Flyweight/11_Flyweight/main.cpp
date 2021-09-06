#include <iostream>

#include <SpacePool.h>

using namespace std;

int main() {
    cout << "11_Flyweight" << endl;
    SpacePool sp;
    cout << "s1 allocating...\n";
    Space* s1 = sp.GetSpace(0, 128);
    cout << "s2 allocating...\n";
    Space* s2 = sp.GetSpace(1, 128);
    cout << "s3 allocating...\n";
    Space* s3 = sp.GetSpace(0, 128);
    cout << sp.CountSpace() << endl;

    return 0;
}
