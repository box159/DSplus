#include<stdio.h>

int main(){
    int d;
    scanf("%d", &d);
    //to hex
    int hex[8] = {0};
    int i = 0;
    while(d > 0){
        hex[i] = d % 16;
        d /= 16;
        i++;
    }
    for(int j = i; j >= 0; j--){
        if(hex[j] < 10){
            printf("%d", hex[j]);
        }
        else{
            printf("%c", hex[j] + 55);
        }
    }
    printf("\n");
    return 0;
}