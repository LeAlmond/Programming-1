#include <stdio.h>

int main()
{
        int a1, a2, a3, a;
        a = 30;

        printf("%s","Enter the first age ");
        scanf("%i",&a1);

        printf("%s","Enter the second age ");
        scanf("%i",&a2);

        printf("%s","Enter the third age ");
        scanf("%i",&a3);

        if (a1 > a)
        {
                if (a2 > a)
                {
                        if (a3 > a)
                        {
                                printf("%s\n","Green");
                        }
                        else
                        {
                                printf("%s\n","Blue" );
                        }
                }
                else
                {
                        printf("%s\n","Blue" );
                }
        }
        else
        {
                printf("%s\n","Blue" );
        }

        return 0;
}
