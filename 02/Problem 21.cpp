#include <iostream>

using namespace std;

int main() {
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if ((i % 12 != 0) && (i % 3 == 0 && i % 2 == 0)) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
