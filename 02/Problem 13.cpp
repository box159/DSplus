#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double w, h;
    cin >> w >> h;
    h /= 100.0;  // Ensure h is in meters, use 100.0 for floating point division
    double bmi = w / (h * h);
    // Original rounding: (int)((value) * 100.0 + 0.5) / 100.0
    double result = static_cast<int>(bmi * 100.0 + 0.5) / 100.0;
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
