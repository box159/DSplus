#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
    cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
    if (num2 == 0) {
        cout << num1 << "/" << num2 << "=Error" << endl;
    } else {
        // C++'s % operator behavior for negative numbers matches the typical expectation for
        // Euclidean division remainder sign. The original C code had a specific adjustment for
        // negative num1. In C++, num1 % num2 has the sign of num1 if non-zero. If num1 = -5, num2 =
        // 2: num1/num2 = -2, num1%num2 = -1. If num1 = 5, num2 = -2: num1/num2 = -2, num1%num2 = 1.
        // The original logic: if(num1 < 0){ int temp = -num1+num2; printf("%d/%d=-%d...%d\n", num1,
        // num2, temp / num2, temp % num2); } This seems to be a custom way to display division for
        // negative numbers. Let's try to replicate the original output format if it's specific. For
        // num1 = -7, num2 = 3: Original C: temp = 7+3=10. printf("-7/3=-%d...%d", 10/3, 10%3) ->
        // -7/3=-3...1 Standard C++: -7/3 = -2, -7%3 = -1. To get -3...1 from -2...-1 (where divisor
        // is 3): quotient is -2-1 = -3, remainder is -1+3 = 1. This happens when num1 is negative
        // and num1 % num2 is negative.
        int quotient = num1 / num2;
        int remainder = num1 % num2;
        if (num1 < 0 && remainder < 0) {  // Adjusted for positive divisor, common case
            quotient--;
            remainder +=
                num2;  // Assuming num2 is positive as per typical problem constraints for ...
        }
        cout << num1 << "/" << num2 << "=" << quotient << "..." << remainder << endl;
    }
    return 0;
}
