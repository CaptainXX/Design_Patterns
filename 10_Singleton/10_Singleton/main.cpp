#include <iostream>

#include <Singleton.h>

using namespace std;

int main() {
    cout << "10_Singleton" << endl;
    cout << "Data of Singleton is: "
         << Singleton::GetInstance()->GetData()
         << endl;;

    return 0;
}
