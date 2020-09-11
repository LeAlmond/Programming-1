#include <stdio.h>

int main()
{
        int count, least, number;
        count = 0;

        printf("Enter a number ");
        scanf("%i", &number);
        least = number;
        while (count < 7) {
                scanf("%i", &number);
                if (number <= least) {
                        least = number;
                }
                count++;
        }
        printf("The smallest number is %i\n", least);
        return 0;
}
