#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input("sample.txt", ios::binary);
    if (!input) {
        cout << "File not found!";
        return 1;
    }

    int part = 0;
    const int SIZE = 20; // 20bytes chunk
    char buffer[SIZE];

    while (input.read(buffer, SIZE) || input.gcount() > 0) {
        ofstream output("chunk_" + to_string(part++), ios::binary);
        output.write(buffer, input.gcount());
        output.close();
    }

    input.close();
    cout << "File split into chunks!";
    return 0;
}
