#include <stdio.h>

int main()
{
        int a1, a2;

        printf("%s", "Enter first number " );
        scanf("%i",&a1);

        printf("%s", "Enter second number " );
        scanf("%i",&a2);

        if (a1 % 3 == 0)
        {
                if (a2 % 3 == 0)
                {
                        printf("yep");
                }
                else printf("no Sah");
        }
        else printf("Could be");

        return 0;
}
