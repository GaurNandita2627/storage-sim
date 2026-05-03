#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream f1("chunk_0", ios::binary);
    ifstream f2("chunk_1", ios::binary);

    if (!f1 || !f2) {
        cout << "Need chunk_0 and chunk_1 only for parity test!";
        return 1;
    }

    ofstream parity("parity", ios::binary);

    char b1, b2;

    while (f1.get(b1) && f2.get(b2)) {
        char p = b1 ^ b2;
        parity.put(p);
    }

    cout << "Parity created safely!";
    return 0;
}
