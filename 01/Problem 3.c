#include<stdio.h>

int main(){
    char name[100];
    scanf("%s", name);
    printf("%c,%c,%c,%c\n", name[3], name[2], name[1], name[0]);

    return 0;
}