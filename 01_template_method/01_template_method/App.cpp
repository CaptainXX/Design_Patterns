#include <App.h>

#include <iostream>

App::App() {
    std::cout << "App contructed\n";
}

App::~App() {
    std::cout << "App destructed\n";
}

bool App::Print1Ctrl() {
    return true;
}

bool App::Print2Ctrl() {
    return true;
}
