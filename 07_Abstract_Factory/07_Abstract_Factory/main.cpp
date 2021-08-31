#include <iostream>

#include <Preprocessor.h>
#include <CameraParser.h>
#include <CameraReceiver.h>
#include <LidarParser.h>
#include <LidarReceiver.h>

using namespace std;

int main() {
    cout << "07_Abstract_Factory" << endl;
    Preprocessor p1(new CameraParser, new CameraReceiver);
    p1.Run();

    Preprocessor p2(new LidarParser, new LidarReceiver);
    p2.Run();

    return 0;
}
