#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        cout << num << " " << num * num << " " << num * num * num << endl;
    }
    return 0;
}
