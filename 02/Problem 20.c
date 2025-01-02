#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find the largest prime number less than N
int largest_prime_less_than(int N) {
    for (int i = N - 1; i > 1; i--) {
        if (is_prime(i)) {
            return i;
        }
    }
    return -1; // Indicates no prime number found (should not happen within given constraints)
}

int main() {
    int N;
    scanf("%d", &N);

    if (N <= 2) {
        printf("2\n");
    }
    else {
        int result = largest_prime_less_than(N);
        if (result != -1) {
            printf("%d\n", result);
        }
        else {
            printf("%d\n", N);
        }
    }

    return 0;
}
