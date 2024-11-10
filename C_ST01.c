#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        char result[33];
        int index = 0;
        int isNegative = 0;
        
        if (b == 0) {
            result[index++] = '0';
        } else {
            if (b < 0) {
            isNegative = 1;
            b = -b;
            }
            while (b > 0) {
            int remainder = b % a;
            result[index++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
            b /= a;
            }
            if (isNegative) {
            result[index++] = '-';
            }
        }
        result[index] = '\0';
        
        // Reverse the result
        for (int i = 0; i < index / 2; ++i) {
            char temp = result[i];
            result[i] = result[index - i - 1];
            result[index - i - 1] = temp;
        }
        
        printf("%s\n", result);
    }
    


    return 0;
}