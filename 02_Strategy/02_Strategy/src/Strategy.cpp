#include <Strategy.h>
#include <iostream>

Strategy::Strategy() {
    std::cout << "Strategy constructed\n";
}

Strategy::~Strategy() {
    std::cout << "Strategy destructed\n";
}
