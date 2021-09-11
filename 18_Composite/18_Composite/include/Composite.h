#pragma once

#include <list>
#include <string>

#include <Component.h>

class Composite : public Component {
public:
    Composite(std::string name);
    ~Composite();

    void add(Component* child);
    void remove(Component* child);

    virtual void Process() override final;

private:
    std::string name_;
    std::list<Component*> children_;

};
