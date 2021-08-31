#pragma once
/**
 * @brief Parse information from lidar sensor
*/

#include <Parser.h>

class LidarParser : public Parser {
public: 
    LidarParser();
    ~LidarParser();
    virtual void ParseData();

};
