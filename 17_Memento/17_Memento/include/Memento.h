#pragma once

#include <string>

class Memento {
public: 
    Memento(const std::string& s);
    std::string GetState() const;
    void SetState(const std::string& s);

private:
    std::string state_;

};
