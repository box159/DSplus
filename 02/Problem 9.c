#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num, base = 1;
        scanf("%d", &num);
        if (num > 31) {
            printf("Value of more than 31\n");
            continue;
        }
        num = base << num;
        printf("%d\n", num);
    }
    return 0;
}