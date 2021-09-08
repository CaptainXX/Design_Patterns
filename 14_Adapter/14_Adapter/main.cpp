#include <iostream>
#include <memory>

#include <Adapter.h>
#include <SoftHDMI.h>
#include <SoftVGA.h>
#include <VirtualVGAScreen.h>

using namespace std;

int main() {
    cout << "14_Adapter" << endl;
    std::unique_ptr<SoftVGA> vga(new VirtualVGAScreen);
    std::unique_ptr<SoftHDMI> hdmi(new Adapter(vga.release()));
    hdmi->PlayFrameAndSound();

    return 0;
}
