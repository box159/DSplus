#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("    *\n");
        printf("   * *\n");
        printf("  *   *\n");
        printf(" *     *\n");
        printf("*********\n");
        break;

    case 2:
        printf("    *\n");
        printf("   ***\n");
        printf("  *****\n");
        printf(" *******\n");
        printf("*********\n");
        break;
    
    case 3:
        printf("*********\n");
        printf(" *******\n");
        printf("  *****\n");
        printf("   ***\n");
        printf("    *\n");
        break;
    default:
        break;
    }

    return 0;
}