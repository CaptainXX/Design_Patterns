#include <Preprocessor.h>

#include <iostream>

Preprocessor::Preprocessor(Parser* p, Receiver* r)
    :parser(p), receiver(r) {
    std::cout << "Preprocessor constructed\n";
    // initialize factories here
    std::unique_ptr<IFactory> camera_factory(new ICameraFactory);
    std::unique_ptr<IFactory> lidar_factory(new ILidarFactory);
    factories.push_back(std::move(camera_factory));
    factories.push_back(std::move(lidar_factory));
}

Preprocessor::~Preprocessor() {
    std::cout << "Preprocessor destructed\n";
}

void Preprocessor::Run() {
    std::cout << "Preprocessor: \n";
    std::cout << "  Receiving...\n";
    std::cout << "    ";
    receiver->RecvData();
    std::cout << "  Parsing...\n";
    std::cout << "    ";
    parser->ParseData();
    std::cout << "Preprocessor over\n";

}
