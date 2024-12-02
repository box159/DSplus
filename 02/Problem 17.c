#include<stdio.h>

int main() {
    int t, s;
    scanf("%d %d", &t, &s);
    if (t <= 60) {
        printf("%d\n", s * t);
    }
    else if (t <= 120) {
        printf("%lf\n", s * 60 + (t - 60) * s * 1.33);
    }
    else {
        printf("%.1lf\n", s * 60 + 60 * s * 1.33 + (t - 120) * s * 1.66);
    }

}