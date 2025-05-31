#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double d;
    cin >> d;
    // Original calculation: (int)(d / 0.238 + 0.9)
    // This is a custom rounding. For d / 0.238 = x.y, it becomes int(x.y + 0.9).
    // If y >= 1, it effectively rounds up.
    // e.g. d/0.238 = 4.0 -> int(4.0+0.9)=int(4.9)=4
    // e.g. d/0.238 = 4.1 -> int(4.1+0.9)=int(5.0)=5
    // This is equivalent to ceil(d/0.238) if d/0.238 has fractional part > 0.0,
    // or more precisely, floor((d/0.238) + 0.9).
    // Let's stick to the original formula.
    cout << static_cast<int>(d / 0.238 + 0.9) << endl;
    return 0;
}
