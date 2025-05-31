#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    while (m != 0 && n != 0) {  // Euclidean algorithm for GCD
        if (m > n) {
            m %= n;
        } else {
            n %= m;
        }
    }
    cout << m + n << endl;  // One is 0, the other is GCD
    return 0;
}
