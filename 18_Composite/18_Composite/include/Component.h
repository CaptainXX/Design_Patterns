#pragma once

class Component {
public: 
    Component(); 
    virtual ~Component();
    virtual void Process() = 0;

};
