#pragma once

#include <vector>
#include <memory>

#include <IFactory.h>
#include <ICameraFactory.h>
#include <ILidarFactory.h>
#include <CameraParser.h>
#include <CameraReceiver.h>
#include <LidarParser.h>
#include <LidarReceiver.h>

class Preprocessor {
public: 
    Preprocessor(Parser* p, Receiver* r);
    virtual ~Preprocessor();

    void Run();

private:
    std::vector<std::unique_ptr<IFactory>> factories;
    std::unique_ptr<Parser> parser;
    std::unique_ptr<Receiver> receiver;

};
