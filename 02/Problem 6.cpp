#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long num1, num2;
        cin >> num1 >> num2;
        long long sum = num1 + num2;
        cout << sum * sum << endl;
    }
    return 0;
}
