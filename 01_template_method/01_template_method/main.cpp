#include <iostream>

#include <App.h>

using namespace std;

int main()
{
    TemplateMethod* tm = new App;
    tm->Run();
    delete tm;
    return 0;
}
