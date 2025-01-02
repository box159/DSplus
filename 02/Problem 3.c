#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        double length;
        scanf("%lf", &length);
        printf("%.1lf\n", (int)(length * length * 10 + 0.5) / 10.0);
    }
    return 0;
}