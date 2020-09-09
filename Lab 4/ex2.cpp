#include <stdio.h>

int main()
{
        int a1, a2, a3, max;

        printf("%s","Enter first age ");
        scanf("%i",&a1 );

        printf("%s","Enter second age ");
        scanf("%i",&a2 );

        printf("%s","Enter second age ");
        scanf("%i",&a3 );

        max = a1;

        if (a2 > max) {

                max = a2;
        }

        if (a3 > max) {

                max = a3;

        }

        printf("Eldest %i",max );

        return 0;
}
