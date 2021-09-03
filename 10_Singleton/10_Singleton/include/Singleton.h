#pragma once

class Singleton {
public:
    static Singleton* GetInstance();
    int GetData() {
        return data_;
    }

private:
    static Singleton* m_instance_;
    Singleton(); 
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    int data_;

};
