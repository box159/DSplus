#include<stdio.h>

int main() {
    double w, h;
    scanf("%lf %lf", &w, &h);
    h /= 100;
    printf("%.2lf\n", (int)((w / (h * h)) * 100.0 + 0.5) / 100.0);
    return 0;
}