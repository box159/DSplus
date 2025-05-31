#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double n_celsius;  // Renamed to avoid conflict if n was a global or from std
    cin >> n_celsius;
    double fahrenheit = n_celsius * 9.0 / 5.0 + 32.0;
    // Original: round(value * 10) / 10.0
    double result = round(fahrenheit * 10.0) / 10.0;
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}
