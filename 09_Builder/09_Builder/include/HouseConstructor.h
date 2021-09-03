#pragma once

#include <memory>

#include <HouseBuilder.h>

class HouseConstructor {
public: 
    HouseConstructor(HouseBuilder*);
    ~HouseConstructor();

    void ConstructHouse();


private:
    std::unique_ptr<HouseBuilder> builder_;

};
