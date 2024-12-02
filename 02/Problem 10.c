#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("km=%.1lf\n", (int)(n * 1.6 * 10 + 0.5) / 10.0);
    return 0;
}