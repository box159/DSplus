#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if((i%12!=0)&&(i % 3 == 0 && i % 2 == 0)){
            sum += i;
        }
        
    }
    printf("%d\n", sum);
    return 0;
}