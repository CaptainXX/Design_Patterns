#pragma once
/**
 * @brief Abstract Factory to create Lidar's Products
*/

#include <IFactory.h>

class ILidarFactory : public IFactory {
public: 
    ILidarFactory();
    ~ILidarFactory();
    virtual Parser* CreateParser();
    virtual Receiver* CreateReceiver();

};
