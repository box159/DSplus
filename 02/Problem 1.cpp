#include <iomanip>  // For setprecision
#include <iostream>

using namespace std;

int main() {
    double base, height;
    cin >> base >> height;
    cout << "Triangle area:" << fixed << setprecision(1) << 0.5 * base * height << endl;
    return 0;
}
