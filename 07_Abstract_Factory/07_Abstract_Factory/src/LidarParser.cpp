#include <LidarParser.h>
#include <iostream>

LidarParser::LidarParser() {
    std::cout << "LidarParser constructed\n";
}

LidarParser::~LidarParser() {
    std::cout << "LidarParser destructed\n";
}

void LidarParser::ParseData() {
    std::cout << "LidarParser: ";
    std::cout << "parsing data...\n";
}
