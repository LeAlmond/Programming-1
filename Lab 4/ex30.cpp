#include <stdio.h>

int main()
{
        int a = 0, b = 1;

        while (b < 12) {
                while (a < b) {
                        printf("*");
                        a++;
                }
                printf("\n");
                b = b + 3;
                a = 0;
        }
        while (b >= 0) {
                a = b;
                while (a > 0) {
                        printf("*");
                        a--;
                }
                printf("\n");
                b = b - 3;
        }
        return 0;
}
