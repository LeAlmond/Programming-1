#include <stdio.h>

int main()
{
        int a = 0, b = 6;

        while (b >= 0) {
                a = (b * 2);
                while (a > 1) {
                        printf("*");
                        a--;
                }
                printf("\n");
                b--;
        }
        return 0;
}
