#include <stdio.h>

int main()
{
        int number, prev, count;
        count = 0;
        prev = 0;

        while (count < 7 ) {
                printf("Enter a numbers ");
                scanf("%i",&number);
                prev = prev + number;
                count++;
        }
        printf("the total of all number's is %i\n", prev);
        return 0;
}
