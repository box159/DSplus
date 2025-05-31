#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cin >> name;
    // Print characters if the string is long enough
    if (name.length() >= 1) {
        cout << name[0] << endl;
    }
    if (name.length() >= 2) {
        cout << name[1] << endl;
    }
    if (name.length() >= 3) {
        cout << name[2] << endl;
    }
    if (name.length() >= 4) {
        cout << name[3] << endl;
    }

    return 0;
}
