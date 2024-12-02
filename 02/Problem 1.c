#include<stdio.h>

int main(){
    double base, height;
    scanf("%lf %lf", &base, &height);
    printf("Triangle area:%.1lf\n", 0.5 * base * height);
    return 0;
}