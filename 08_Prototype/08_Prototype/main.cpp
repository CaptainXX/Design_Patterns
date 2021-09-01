#include <iostream>

#include <Application.h>
#include <CameraSensor.h>
#include <LidarSensor.h>

using namespace std;

int main() {
    cout << "08_Prototype" << endl;
    Application app1(new CameraSensor);
    app1.Run();

    Application app2(new LidarSensor);
    app2.Run();

    return 0;
}
