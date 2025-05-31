#include <iostream>
#include <string>
#include <vector>  // Useful for more complex mappings or if data comes from elsewhere

using namespace std;

int main() {
    // Using arrays of std::string for direct mapping
    string en[5] = {"dog", "cat", "duck", "cow", "fox"};
    string ch[5] = {"狗", "貓", "鴨", "牛",
                    "狐"};  // Ensure terminal/IDE supports UTF-8 for Chinese characters

    string name;
    cin >> name;

    bool found = false;
    for (int i = 0; i < 5; i++) {  // Iterate up to 5 (size of arrays)
        if (name == en[i]) {
            cout << ch[i] << endl;
            found = true;
            break;
        } else if (name == ch[i]) {
            cout << en[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        // Optional: Handle case where the input name is not in either list
        // cout << "Unknown word" << endl;
    }

    return 0;
}
