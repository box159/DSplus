#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num, base = 1;
        cin >> num;
        if (num > 31) {
            cout << "Value of more than 31" << endl;
            continue;
        }
        num = base << num;
        cout << num << endl;
    }
    return 0;
}
