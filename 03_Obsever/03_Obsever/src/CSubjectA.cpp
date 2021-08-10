#include <CSubjectA.h>

#include <iostream>
#include <random>

CSubjectA::CSubjectA(): sub_sta_(Init) {
    std::cout << "CSubjectA constructed\n";
    std::cout << "CSubjectA's init state is " << sub_sta_ << std::endl;
}

State CSubjectA::GetState() {
    return sub_sta_;
}

void CSubjectA::SetStateAlgo() {
    sub_sta_ = Activate;
    std::cout << "CSubjectA's state change to " << sub_sta_ << std::endl;
    Notify();
}
