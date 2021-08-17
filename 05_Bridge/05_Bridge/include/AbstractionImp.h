#pragma once

class AbstractionImp {
public: 
    AbstractionImp(); 
    virtual ~AbstractionImp();

    virtual void Init() = 0;
    virtual void Connect() = 0;
    virtual void Send() = 0;
    virtual void Close() = 0;

};
