#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    while(m != 0 && n != 0){
        if(m>n){
            m %= n;

        }
        else{
            n %= m;
        }
        
        
    }
    printf("%d\n", m+n);
}