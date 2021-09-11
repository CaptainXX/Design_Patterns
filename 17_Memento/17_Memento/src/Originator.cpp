#include <Originator.h>

#include <iostream>

Originator::Originator()
    : state_("Init"),
      state_index_(0),
      state_vec_({"Init", "Processing", "Closed"}) {
    std::cout << "Originator constructed\n";
}

Memento Originator::CreateMemento() const {
    Memento m(state_);
    return m;
}

void Originator::SetMemento(const Memento &m) {
    state_ = m.GetState();
}

void Originator::ChangeState() {
    state_index_++;
    state_ = state_vec_[state_index_];
}
