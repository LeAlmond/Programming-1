#include <stdio.h>

int main()
{
        int a = 10, b = 20, c;

        (a < b) ? c = a, a = b : c = b;

        printf("%d %d", c, a);

        return 0;
}
