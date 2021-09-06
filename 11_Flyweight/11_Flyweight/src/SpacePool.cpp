#include <SpacePool.h>

#include <iostream>

SpacePool::SpacePool() {
    std::cout << "SpacePool constructed\n";
    space_allocated_ = 0;
}

SpacePool::~SpacePool() {
    std::cout << "SpacePool destructed\n";
    Clear();
}

Space* SpacePool::GetSpace(int space_id, int space_size) {
    if (space_map_.find(space_id) != space_map_.end()) {
        return space_map_[space_id];
    }
    space_map_[space_id] = new Space;
    space_map_[space_id]->AllocateSpace(space_size);
    space_allocated_ += space_size;
    return space_map_[space_id];
}

void SpacePool::Clear() {
    for (auto &i: space_map_) {
        i.second->ReleaseSpace();
        delete i.second;
    }
    space_map_.clear();
    space_allocated_ = 0;
}
