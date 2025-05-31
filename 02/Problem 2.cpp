#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double top, base, height;
    cin >> top >> base >> height;
    cout << "Trapezoid area:" << fixed << setprecision(1) << 0.5 * (base + top) * height << endl;
    return 0;
}
