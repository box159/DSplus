#include<stdio.h>

int main(){
    double top, base, height;
    scanf("%lf %lf %lf", &top, &base, &height);
    printf("Trapezoid area:%.1lf\n", 0.5 * (base + top) * height);
    return 0;
}