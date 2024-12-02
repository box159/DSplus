#include<stdio.h>
#include<math.h>

int main(){
    int x1,y1,x2,y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int  x = x1 - x2;
    int y = y1 - y2;
    if(x < 0){
        x = -x;
    }
    if(y < 0){
        y = -y;
    }
    printf("%lf\n", (int)(sqrt((x*x) + (y*y))*100+0.5)/100);

    return 0;
}