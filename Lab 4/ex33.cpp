#include <stdio.h>

int main()
{
        int a = 0, b = 12, row = 1;

        while (row <= 3) {
                while (a < b) {
                        printf("*");
                        a++;
                }
                printf("\n");
                a = 0;
                row++;
        }
        while (row <= 8) {
                while (a < b) {
                        printf("*");
                        a++;
                }
                printf("\n");
                b = b - 1;
                a = 0;
                row++;
        }
        return 0;
}
