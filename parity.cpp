#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {

    vector<string> chunks;

    for (int i = 0; i < 100; i++) {
        string name = "chunk_" + to_string(i);
        ifstream test(name);
        if (test.is_open()) {
            chunks.push_back(name);
        }
    }

    if (chunks.size() < 2) {
        cout << "Need at least 2 chunks!" << endl;
        return 1;
    }

    ifstream f1(chunks[0]);
    ifstream f2(chunks[1]);

    if (!f1.is_open() || !f2.is_open()) {
        cout << "Error opening chunk files!" << endl;
        return 1;
    }

    ofstream parity("parity_file");

    char b1, b2;

    while (f1.get(b1) && f2.get(b2)) {
        parity.put(b1 ^ b2);
    }

    cout << "Parity created successfully using " << chunks.size() << " chunks!" << endl;

    return 0;
}
