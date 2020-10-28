#include <stdio.h>

int main()
{
        int a = 0, b = 1, row = 1;

        while (row < 5) {
                while (a < b) {
                        printf("*");
                        a++;
                }
                printf("\n");
                b = b + 3;
                a = 0;
                row++;
        }
        while (row <= 9) {
                a = b;
                while (a > 0) {
                        printf("*");
                        a--;
                }
                printf("\n");
                b = b - 3;
                row++;
        }
        return 0;
}
