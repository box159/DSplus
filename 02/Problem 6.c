#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int num1, num2;
        scanf("%d %d", &num1, &num2);
        int sum = num1 + num2;
        printf("%d\n",sum*sum);
    }
    return 0;
}