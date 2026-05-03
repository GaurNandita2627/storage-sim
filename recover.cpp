#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream c0("chunk_0", ios::binary);
    ifstream parity("parity", ios::binary);

    ofstream recovered("chunk_5", ios::binary);

    if (!c0 || !parity) {
        cout << "Required files missing!";
        return 1;
    }

    char b1, bp;

    while (c0.get(b1) && parity.get(bp)) {
        char original = b1 ^ bp;
        recovered.put(original);
    }

    cout << "Chunk recovered successfully!";
    return 0;
}

