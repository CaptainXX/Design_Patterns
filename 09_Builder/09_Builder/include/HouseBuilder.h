#pragma once

class HouseBuilder {
public: 
    HouseBuilder(); 
    virtual ~HouseBuilder();

    virtual void BuildStructure() = 0;
    virtual void BuildDoor() = 0;
    virtual void BuildWindow() = 0;

};
