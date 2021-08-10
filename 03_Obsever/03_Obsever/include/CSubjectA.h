#ifndef C_SUBJECT_A_H
#define C_SUBJECT_A_H

#include <Subject.h>

#include <datastructures.h>

class CSubjectA : public Subject {
public:
    CSubjectA();

    State GetState();
    void SetActivate();
    void SetInit();
    void SetDestroy();

private:
    State sub_sta_;
};

#endif
