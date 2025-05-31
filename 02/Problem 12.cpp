#include <iostream>
#include <vector>  // Can use vector for mtype if preferred

using namespace std;

int main() {
    int money;
    int mtype[3] = {10, 5, 1};  // Or std::vector<int> mtype = {10, 5, 1};
    cin >> money;
    for (int i = 0; i < 3; i++) {  // Or for(int type : mtype)
        cout << "NT" << mtype[i] << "=" << money / mtype[i] << endl;
        money %= mtype[i];
    }
    return 0;
}
