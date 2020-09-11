#include <stdio.h>

int main()
{
        int odd, count;
        count = 1;
        odd = 0;

        while (count <= 15 ) {
                odd = odd + count;
                count+=2;
        }
        printf("The sum is %i\n", odd);
        return 0;
}
