#include <TemplateMethod.h>

#include <iostream>

TemplateMethod::TemplateMethod() {
    std::cout << "Template Method constructed\n";
}

TemplateMethod::~TemplateMethod() {
    std::cout << "Template Method destructed\n";
}

void TemplateMethod::Run() {
    Init();

    if ( Print1Ctrl() ) {
        Print1();
    }

    if ( Print2Ctrl() ) {
        Print2();
    }
}

void TemplateMethod::Init() {
    std::cout << "Template Method initialized\n";
}

void TemplateMethod::Print1() {
    std::cout << "Print1\n";
}

void TemplateMethod::Print2() {
    std::cout << "Print2\n";
}
