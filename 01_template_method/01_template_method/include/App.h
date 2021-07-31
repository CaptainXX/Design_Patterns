#ifndef APP_H
#define APP_H

#include <TemplateMethod.h>

class App : public TemplateMethod {
public:
    App();
    ~App();

protected:
    bool Print1Ctrl();
    bool Print2Ctrl();

};

#endif
