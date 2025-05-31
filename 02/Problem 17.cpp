#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int t;
    double s;
    cin >> t >> s;
    cout << fixed;
    if (t <= 60) {
        // Original printf("%d\n", s * t); implies integer output if s*t is whole.
        // However, s is double. If s*t is 100.0, setprecision(0) will print 100.
        cout << setprecision(0) << s * static_cast<double>(t) << endl;
    } else if (t <= 120) {
        // Original printf("%lf\n", ...); implies default double precision.
        // The last case uses %.1lf, so let's be consistent if precision is intended.
        // Assuming the problem wants 1 decimal place for overtime calculations.
        cout << setprecision(1) << s * 60.0 + (static_cast<double>(t) - 60.0) * s * 1.33 << endl;
    } else {
        cout << setprecision(1)
             << s * 60.0 + 60.0 * s * 1.33 + (static_cast<double>(t) - 120.0) * s * 1.66 << endl;
    }
    return 0;
}
