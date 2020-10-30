#include <stdio.h>

int main()
{
        int a = 1, b = 0, c = 1;

        while (c <= 6) {
                while (a <= 12) {
                        b = c * a;
                        printf("%d x %d = %d\n", c, a, b);
                        a++;
                }
                a = 1;
                c++;
        }
        printf("\n");
        return 0;
}
