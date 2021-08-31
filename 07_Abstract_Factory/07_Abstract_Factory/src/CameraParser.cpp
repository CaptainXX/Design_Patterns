#include <CameraParser.h>
#include <iostream>

CameraParser::CameraParser() {
    std::cout << "CameraParser constructed\n";
}

CameraParser::~CameraParser() {
    std::cout << "CameraParser destructed\n";
}

void CameraParser::ParseData() {
    std::cout << "CameraParser: ";
    std::cout << "parsing data...\n";
}
