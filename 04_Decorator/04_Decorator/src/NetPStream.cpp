#include <NetPStream.h>

#include <iostream>

NetPStream::NetPStream() {
    std::cout << "NetPStream constructed\n";
}

NetPStream::~NetPStream() {
    std::cout << "NetPStream destructed\n";
}

void NetPStream::PrintToPs(std::string s_to_ps) {
    std::cout << "NetPStream: " << s_to_ps << std::endl;
}
