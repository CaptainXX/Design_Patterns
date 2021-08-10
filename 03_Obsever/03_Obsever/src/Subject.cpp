#include <Subject.h>

#include <iostream>

Subject::Subject() {
    std::cout << "Subject constructed\n";
}

Subject::~Subject() {
    std::cout << "Subject destructed\n";
}

void Subject::Notify() {
   for ( auto o: ob_v ) {
       o->Update();
   }
}

void Subject::Attach(Observer *o) {
    ob_v.push_back(o);
}

void Subject::Detach(Observer *o) {
    for ( auto i = ob_v.begin();
          i != ob_v.end(); ) {
        if ( *i == o ) {
            ob_v.erase(i);
            return;
        } else {
            ++i;
        }
    }
}
