#include <iostream>
#include <string>  // For reading the input line if it contains multiple digits not separated

using namespace std;

int main() {
    // Assuming the input is 5 single digits, one per line or separated by spaces.
    // Original scanf("%1d", &temp) reads one digit.
    for (int i = 0; i < 5; i++) {
        char digit_char;
        cin >> digit_char;  // Reads a single character
        if (digit_char >= '0' && digit_char <= '9') {
            int temp = digit_char - '0';  // Convert char '0'-'9' to int 0-9
            for (int j = 0; j < temp; j++) {
                cout << "*";
            }
            cout << endl;
        } else {
            // Handle non-digit input if necessary
            cout << endl;  // Or some error indication
        }
    }
    return 0;
}
