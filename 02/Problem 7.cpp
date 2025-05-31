#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, max_val;
    cin >> n1 >> n2 >> n3;
    max_val = n1;
    if (n2 > max_val) {
        max_val = n2;
    }
    if (n3 > max_val) {
        max_val = n3;
    }
    cout << max_val << endl;
    return 0;
}
