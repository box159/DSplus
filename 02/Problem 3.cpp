#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        double length;
        cin >> length;
        double result = static_cast<int>(length * length * 10 + 0.5) / 10.0;
        cout << fixed << setprecision(1) << result << endl;
    }
    return 0;
}
