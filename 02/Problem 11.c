#include<stdio.h>
#include<math.h>

int main() {
    double n;
    scanf("%lf", &n);
    printf("%.1lf\n", round((n * 9.0 / 5.0 + 32) * 10) / 10.0);
    return 0;
}