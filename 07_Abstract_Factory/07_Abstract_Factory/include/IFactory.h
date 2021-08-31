#pragma once
/**
 * @brief Abstract Factory
*/

#include <Parser.h>
#include <Receiver.h>

class IFactory {
public: 
    IFactory();
    virtual ~IFactory();
    virtual Parser* CreateParser() = 0;
    virtual Receiver* CreateReceiver() = 0;

};
