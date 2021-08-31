#pragma once
/**
 * @brief Sensor information parser
*/

class Parser {
public: 
    Parser();
    virtual ~Parser();
    virtual void ParseData() = 0;

};
