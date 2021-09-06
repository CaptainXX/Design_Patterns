#pragma once

#include <cstdint>

class Space {
public: 
    Space(); 
    void AllocateSpace(uint32_t size);
    void ReleaseSpace();

private:
    char *data_;
    uint32_t data_len_;

};
