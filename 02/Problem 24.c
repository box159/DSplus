#include<stdio.h>

int main(){
    int n;
    int x,y;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        int temp = x-y;
        if(temp < 0){
            temp = -temp;
        }
        temp++;
        printf("%d\n", (x + y)*temp/2);
        
    }
    return 0;
}