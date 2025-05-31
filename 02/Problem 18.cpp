#include <iostream>

using namespace std;

int main() {
    int s;
    cin >> s;
    int d = s / 86400;
    s %= 86400;
    int h = s / 3600;
    s %= 3600;
    int m = s / 60;
    s %= 60;
    cout << d << " days" << endl;
    cout << h << " hours" << endl;
    cout << m << " minutes" << endl;
    cout << s << " seconds" << endl;
    return 0;
}
