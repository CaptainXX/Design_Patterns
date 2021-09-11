#pragma once

#include <string>
#include <vector>

#include <Memento.h>

class Originator {
public: 
    Originator();
    Memento CreateMemento() const;
    void SetMemento(const Memento& m);
    void ChangeState();
    std::string GetState() {
        return state_;
    }

private:
    std::string state_;
    int state_index_;
    const std::vector<std::string> state_vec_;

};
