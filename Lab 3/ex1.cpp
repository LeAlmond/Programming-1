#include <stdio.h>

int main()
{
        int a1;
        float p1, p;
        p = 38.20;

        printf("%s","Enter item price ");
        scanf("%f",&p1 );

        printf("%s","Enter item number ");
        scanf("%i",&a1 );

        if (a1 > 18) {

                printf("%s %.2f\n","$",p1 + p);
        }

        return 0;
}
