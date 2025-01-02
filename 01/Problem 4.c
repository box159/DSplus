#include<stdio.h>
#include<string.h>

int main() {
    char en[5][100] = { "dog","cat","duck","cow","fox" };
    char ch[5][100] = { "狗","貓","鴨","牛","狐" };
    char name[100];
    scanf("%s", name);
    for (int i = 0;i < 5;i++) {
        if (strcmp(name, en[i]) == 0) {
            printf("%s\n", ch[i]);
            break;
        }
        else if (strcmp(name, ch[i]) == 0) {
            printf("%s\n", en[i]);
            break;
        }
    }


    return 0;
}