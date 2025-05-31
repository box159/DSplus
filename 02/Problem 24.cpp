#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    long long x, y;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        long long temp = x - y;
        if (temp < 0) {
            temp = -temp;
        }
        temp++;
        cout << (x + y) * temp / 2 << endl;
    }
    return 0;
}
