#include <cmath>
#include <iostream>

using namespace std;

bool is_prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int largest_prime_less_than(int N) {
    for (int i = N - 1; i > 1; i--) {
        if (is_prime(i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N;
    cin >> N;

    if (N <= 2) {
        cout << "2" << endl;  // Special case based on original logic
    } else {
        int result = largest_prime_less_than(N);
        if (result != -1) {
            cout << result << endl;
        } else {
            // This case implies no prime less than N was found (e.g., N=3 -> result=2, N=1 ->
            // result=-1) Original code printed N here. If N=1, it prints 1. If the problem
            // guarantees N > 2 for this branch, then result should not be -1. Let's stick to the
            // original logic's fallback.
            cout << N << endl;
        }
    }

    return 0;
}
