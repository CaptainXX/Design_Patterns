#include <iostream>

#include <OpenState.h>
#include <CloseState.h>
#include <WaitState.h>
#include <Context.h>

using namespace std;

int main() {
    cout << "16_State" << endl;

    Context c1(OpenState::GetInstance());
    c1.AcceptAndSend();

    Context c2(CloseState::GetInstance());
    c2.AcceptAndSend();

    Context c3(WaitState::GetInstance());
    c3.AcceptAndSend();

    return 0;
}
