#pragma once
/**
 * @brief Parse information from camera sensor
*/

#include <Parser.h>

class CameraParser : public Parser {
public: 
    CameraParser();
    ~CameraParser();
    virtual void ParseData();

};
