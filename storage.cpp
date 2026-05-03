#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int choice;

    while (true) {
        cout << "\n===== STORAGE SYSTEM MENU =====\n";
        cout << "1. Split file\n";
        cout << "2. Merge file\n";
        cout << "3. Generate parity\n";
        cout << "4. Recover data\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string file;
cout << "sample.txt: ";
cin >> file;

string cmd = "./split " + file;
system(cmd.c_str());
        }
        else if (choice == 2) {
            system("./merge");
        }
        else if (choice == 3) {
            system("./parity");
        }
        else if (choice == 4) {
            system("./recover");
        }
        else if (choice == 5) {
            cout << "Exiting...\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
