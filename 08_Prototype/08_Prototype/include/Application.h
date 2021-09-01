#pragma once

#include <memory>

#include <SensorPrototype.h>

class Application {
public: 
    Application(SensorPrototype* p);
    ~Application();

    void Run();

protected:
    std::unique_ptr<SensorPrototype> prototype;
};
