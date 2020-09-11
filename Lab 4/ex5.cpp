#include <stdio.h>

int main()
{
        int number, greater, loop;
        loop = 0;
        greater = 0;

        while (loop < 8 ) {
                printf("%s", "Enter a numbers ");
                scanf("%i",&number);
                if (number > 20) {
                        greater++;
                }
                loop++;
        }
        printf("the total amount of number's greater than 20 is %i\n", greater);
        return 0;
}
