#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double min_val;
    cin >> min_val;
    cout << fixed << setprecision(1);

    double result;
    if (min_val <= 800) {
        result = static_cast<int>(min_val * 0.9 * 10 + 0.5) / 10.0;
    } else if (min_val < 1500) {
        result = static_cast<int>(min_val * 0.9 * 0.9 * 10 + 0.5) / 10.0;
    } else {
        result = static_cast<int>(min_val * 0.9 * 0.79 * 10 + 0.5) / 10.0;
    }
    cout << result << endl;
    return 0;
}
