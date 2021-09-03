#include <Singleton.h>

#include <iostream>

Singleton* Singleton::m_instance_ = new Singleton();

Singleton::Singleton() {
    std::cout << "Singleton constructed\n";
    data_ = 998;
}

Singleton* Singleton::GetInstance() {
    return m_instance_;
}
