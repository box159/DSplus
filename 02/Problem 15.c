#include<stdio.h>

int main() {
    int min;
    scanf("%d", &min);
    if (min <= 800) {
        printf("%.1lf\n", (int)(0.9 * min * 10 + 0.5) / 10.0);
    }
    else if (min < 1500) {
        printf("%.1lf\n", (int)(0.9 * min * 0.9 * 10 + 0.5) / 10.0);
    }
    else {
        printf("%.1lf\n", (int)(0.9 * min * 0.79 * 10 + 0.5) / 10.0);
    }

}