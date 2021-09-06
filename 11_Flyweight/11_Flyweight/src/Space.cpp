#include <Space.h>

#include <iostream>

Space::Space() {
    std::cout << "Space constructed\n";
}

void Space::AllocateSpace(uint32_t size) {
    data_ = new char[size];
    data_len_ = size;
    std::cout << "Allocated " << size << " Bytes of space in heap\n";
}

void Space::ReleaseSpace() {
    delete [] data_;
    data_len_ = 0;
}
