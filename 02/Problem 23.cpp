#include <algorithm>
#include <iostream>
#include <string>
#include <vector>  // Not strictly needed for this approach, but useful for alternatives

using namespace std;

int main() {
    int d;
    cin >> d;
    if (d == 0) {
        cout << "0" << endl;
        return 0;
    }

    string hex_str = "";
    char hex_chars[] = "0123456789ABCDEF";  // C-style array for mapping

    if (d < 0) {  // Handle negative numbers if necessary, though problem context implies positive
        // For ITSA problems, usually positive integers unless specified.
        // If negative, decide on representation (e.g. two's complement, or just error/undefined)
        // Assuming positive d based on original code.
    }

    while (d > 0) {
        hex_str += hex_chars[d % 16];
        d /= 16;
    }
    reverse(hex_str.begin(), hex_str.end());

    cout << hex_str << endl;

    return 0;
}
