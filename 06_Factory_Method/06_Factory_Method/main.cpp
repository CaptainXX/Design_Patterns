#include <iostream>

#include <Communication.h>
#include <MessagerFactory.h>
#include <PublisherFactory.h>

using namespace std;

int main() {
    Communication message_communication(new MessagerFactory);
    message_communication.CommunicationProcess();

    cout << endl;

    Communication publish_communication(new PublisherFactory);
    publish_communication.CommunicationProcess();

    return 0;
}
