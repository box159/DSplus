#include <algorithm>
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

void to_binary_cpp(int num) {
    // Assuming num is within 0-255 for 8-bit representation as per original problem context
    // If num can be negative or larger, bitset size or logic might need adjustment
    cout << bitset<8>(num) << endl;
}

int main() {
    int num;
    cin >> num;

    to_binary_cpp(num);

    return 0;
}
