#include <Application.h>

#include <iostream>

Application::Application(SensorPrototype* p)
    : prototype(p) {
    std::cout << "Application constructed\n";
}

Application::~Application() {
    std::cout << "Application destructed\n";
}

void Application::Run() {
    std::cout << "Run...\n";
    std::unique_ptr<SensorPrototype> sensor(prototype->Clone());
    std::cout << "  ";
    sensor->WhoAmI();
    std::cout << "End\n";
}
