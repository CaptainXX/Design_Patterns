#pragma once

#include <unordered_map>

#include <Space.h>

class SpacePool {
public: 
    SpacePool();
    ~SpacePool();
    Space* GetSpace(int space_id, int space_size);
    void Clear();

    int CountSpace() {
        return space_allocated_;
    }

private:
    std::unordered_map<int, Space*> space_map_;
    int space_allocated_;

};
