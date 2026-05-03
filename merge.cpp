#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream output("merged.txt", ios::binary);

    for (int i = 0; i < 100; i++) {
        ifstream input("chunk_" + to_string(i), ios::binary);
        if (!input) break;

        output << input.rdbuf();
        input.close();
    }

    output.close();
    cout << "Files merged!";
    return 0;
}
