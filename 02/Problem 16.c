    #include<stdio.h>

    int main() {
        int h1, m1, h2, m2;
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if (m2 > m1) {
            h2--;
            m2 += 60;
        }
        int total = (h2 - h1) * 60 + m2 - m1;
        int sum = 0;
        if (total <= 120) {
            printf("%d\n", total / 30 * 30);
        }
        else if (total <= 240) {
            printf("%d\n", 120 + (total - 120) / 30 * 40);
        }
        else {
            printf("%d\n", 120 + 160 + (total - 240) / 30 * 60);
        }
    }
