#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double n_miles;  // Renamed to avoid conflict
    cin >> n_miles;
    double km = n_miles * 1.6;
    // Original rounding: (int)(value * 10 + 0.5) / 10.0
    double result = static_cast<int>(km * 10.0 + 0.5) / 10.0;
    cout << "km=" << fixed << setprecision(1) << result << endl;
    return 0;
}
