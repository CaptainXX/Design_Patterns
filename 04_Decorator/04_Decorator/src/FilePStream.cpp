#include <FilePStream.h>

#include <iostream>

FilePStream::FilePStream() {
    std::cout << "FilePStream constructed\n";
}

FilePStream::~FilePStream() {
    std::cout << "FilePStream destucted\n";
}

void FilePStream::PrintToPs(std::string s_to_ps) {
    std::cout << "FilePStream: " << s_to_ps << std::endl;
}
