#pragma once
/**
 * @brief Abstract Factory to create camera's Products
*/

#include <IFactory.h>

class ICameraFactory : public IFactory {
public: 
    ICameraFactory();
    ~ICameraFactory();
    virtual Parser* CreateParser();
    virtual Receiver* CreateReceiver();

};
