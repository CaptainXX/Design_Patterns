#ifndef TEMPLATE_METHOD_H
#define TEMPLATE_METHOD_H

class TemplateMethod {
public:
    TemplateMethod();
    virtual ~TemplateMethod();
    void Run();

protected:
    virtual bool Print1Ctrl() = 0;
    virtual bool Print2Ctrl() = 0;

private:
    void Init();
    void Print1();
    void Print2();
};

#endif
