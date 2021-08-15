#include <PStream.h>

#include <iostream>

PStream::PStream() {
    std::cout << "PStream constructed\n";
}

PStream::~PStream() {
    std::cout << "PStream destructed\n";
}
