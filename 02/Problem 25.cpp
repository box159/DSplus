#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dx = static_cast<double>(x1 - x2);
    double dy = static_cast<double>(y1 - y2);

    double distance = sqrt((dx * dx) + (dy * dy));
    double result = static_cast<int>(distance * 100 + 0.5) / 100.0;

    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
