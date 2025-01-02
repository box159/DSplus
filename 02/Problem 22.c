#include <stdio.h>

// Function to convert an integer to its 8-bit binary representation
void to_binary(int num) {
    unsigned int mask = 1 << 7; // 8-bit mask (10000000)
    for (int i = 0; i < 8; i++) {
        putchar((num & mask) ? '1' : '0');
        num <<= 1;
    }
    putchar('\n');
}

int main() {
    int num;
    scanf("%d", &num);

    to_binary(num);

    return 0;
}
