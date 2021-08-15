#include <iostream>
#include <vector>

#include <FilePStream.h>
#include <NetPStream.h>
#include <PStreamCrypto.h>
#include <PStreamBuffered.h>

using namespace std;

int main() {
    PStream* net_s = new NetPStream;
    PStream* file_s = new FilePStream;
    PStream* crypto_net_s = new PStreamCrypto(net_s);
    PStream* crypto_file_s = new PStreamCrypto(file_s);
    PStream* buffered_net_s = new PStreamBuffered(net_s);
    PStream* buffered_file_s = new PStreamBuffered(file_s);
    vector<PStream*> psv {
        net_s, file_s,
        crypto_net_s, crypto_file_s,
        buffered_net_s, buffered_file_s
    };
    cout << "-------------------------------\n\n";

    std::string msg = "Hello world";
    for (auto i : psv) {
        i->PrintToPs(msg);
    }

    cout << "\n-------------------------------\n";
    for (auto &i : psv) {
        delete i;
    }
    psv.clear();
    return 0;
}
