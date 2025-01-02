#include<stdio.h>

int main() {
    int money;
    int mtype[3] = { 10,5,1 };
    scanf("%d", &money);
    for (int i = 0; i < 3; i++) {
        printf("NT%d=%d\n", mtype[i], money / mtype[i]);
        money %= mtype[i];
    }
    return 0;
}