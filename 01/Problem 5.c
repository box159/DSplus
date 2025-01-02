#include<stdio.h>
#include<string.h>

int main() {
    for (int i = 0;i < 5;i++) {
        int temp;
        scanf("%1d", &temp);
        for (int j = 0;j < temp;j++) {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}