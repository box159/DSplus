#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    switch (n) {
        case 1:
            cout << "    *" << endl;
            cout << "   * *" << endl;
            cout << "  *   *" << endl;
            cout << " *     *" << endl;
            cout << "*********" << endl;
            break;
        case 2:
            cout << "    *" << endl;
            cout << "   ***" << endl;
            cout << "  *****" << endl;
            cout << " *******" << endl;
            cout << "*********" << endl;
            break;
        case 3:
            cout << "*********" << endl;
            cout << " *******" << endl;
            cout << "  *****" << endl;
            cout << "   ***" << endl;
            cout << "    *" << endl;
            break;
        default:
            // No action for other numbers
            break;
    }

    return 0;
}
