#pragma once

#include <HouseBuilder.h>

class WoodHouseBuilder : public HouseBuilder {
public: 
    WoodHouseBuilder();
    ~WoodHouseBuilder();

    virtual void BuildStructure();
    virtual void BuildDoor();
    virtual void BuildWindow();

};
