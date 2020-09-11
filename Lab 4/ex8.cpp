#include <stdio.h>

int main()
{
        int count, usercount, product;
        count = 1;
        usercount = 0;
        product = 1;

        printf("Enter a number ");
        scanf("%i", &usercount);
        while (count <= usercount) {
                product = product * count;
                count++;
        }
        printf("The sum is %i\n", product);
        return 0;
}
