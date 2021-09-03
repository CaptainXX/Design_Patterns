#pragma once

#include <HouseBuilder.h>

class StoneHouseBuilder : public HouseBuilder {
public: 
    StoneHouseBuilder();
    ~StoneHouseBuilder();

    virtual void BuildStructure();
    virtual void BuildDoor();
    virtual void BuildWindow();

};
