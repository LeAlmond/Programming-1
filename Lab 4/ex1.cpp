#include <stdio.h>

int main()
{
        int a1, a2;

        printf("%s","Enter first age ");
        scanf("%i",&a1 );

        printf("%s","Enter second age ");
        scanf("%i",&a2 );

        if (a1 > a2) {

                printf("Different");
        }

        else if (a1 < a2 ) {

                printf("Different");
        }
        else{

                printf("Same");
        }

        return 0;
}
