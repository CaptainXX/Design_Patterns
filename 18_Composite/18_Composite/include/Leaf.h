#pragma once

#include <string>

#include <Component.h>

class Leaf : public Component {
public: 
    Leaf(std::string n);
    ~Leaf();

    virtual void Process() override final;

private:
    std::string name_;

};
