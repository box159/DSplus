#include <iostream>
// #include<string> // Not needed for this problem's output

using namespace std;

int main() {
    int n;
    cin >> n;
    switch (n) {
        case 0:
            cout << "*****" << endl;
            cout << "*   *" << endl;
            cout << "*   *" << endl;
            cout << "*   *" << endl;
            cout << "*****" << endl;
            break;
        case 1:
            cout << "    *" << endl;
            cout << "    *" << endl;
            cout << "    *" << endl;
            cout << "    *" << endl;
            cout << "    *" << endl;
            break;
        case 2:
            cout << "*****" << endl;
            cout << "    *" << endl;
            cout << "*****" << endl;
            cout << "*    " << endl;
            cout << "*****" << endl;
            break;
        case 3:
            cout << "*****" << endl;
            cout << "    *" << endl;
            cout << "*****" << endl;
            cout << "    *" << endl;
            cout << "*****" << endl;
            break;
        case 4:
            cout << "*   *" << endl;
            cout << "*   *" << endl;
            cout << "*****" << endl;
            cout << "    *" << endl;
            cout << "    *" << endl;
            break;
        case 5:
            cout << "*****" << endl;
            cout << "*    " << endl;
            cout << "*****" << endl;
            cout << "    *" << endl;
            cout << "*****" << endl;
            break;
        case 6:
            cout << "*****" << endl;
            cout << "*    " << endl;
            cout << "*****" << endl;
            cout << "*   *" << endl;
            cout << "*****" << endl;
            break;
        case 7:
            cout << "*****" << endl;
            cout << "    *" << endl;
            cout << "    *" << endl;
            cout << "    *" << endl;
            cout << "    *" << endl;
            break;
        case 8:
            cout << "*****" << endl;
            cout << "*   *" << endl;
            cout << "*****" << endl;
            cout << "*   *" << endl;
            cout << "*****" << endl;
            break;
        case 9:
            cout << "*****" << endl;
            cout << "*   *" << endl;
            cout << "*****" << endl;
            cout << "    *" << endl;
            cout << "*****" << endl;
            break;
        default:
            // No action for other numbers, or print an error/message
            break;
    }

    return 0;
}
