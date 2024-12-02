#include<stdio.h>

int main() {
    int s;
    scanf("%d", &s);
    // second to days, hours, minutes,
    int d = s / 86400;
    s %= 86400;
    int h = s / 3600;
    s %= 3600;
    int m = s / 60;
    s %= 60;
    printf("%d days\n", d);
    printf("%d hours\n", h);
    printf("%d minutes\n", m);
    printf("%d seconds\n", s);

}