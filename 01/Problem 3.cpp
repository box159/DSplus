#include <algorithm>  // For std::reverse if a different approach was taken
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cin >> name;
    // Ensure the string has at least 4 characters before accessing them
    if (name.length() >= 4) {
        cout << name[3] << "," << name[2] << "," << name[1] << "," << name[0] << endl;
    } else {
        // Handle strings shorter than 4 characters if necessary
        // e.g., print an error or print what's available in reverse
        // Original C code would have undefined behavior if string is too short.
        // For this problem, assume input is always valid (length >= 4).
        // If not, a more robust handling is needed.
        // If the problem implies printing available characters for shorter strings:
        // for (int i = name.length() - 1; i >= 0; --i) {
        //     cout << name[i] << (i == 0 ? "" : ",");
        // }
        // cout << endl;
        // But the original format was fixed for 4 chars.
    }
    return 0;
}
