#include <stdio.h>

int main()
{
        int n1, n2, n3;

        printf("%s", "Enter first number " );
        scanf("%i",&n1);

        printf("%s", "Enter second number " );
        scanf("%i",&n2);

        printf("%s", "Enter third number " );
        scanf("%i",&n3);

        if (n1 % 2 == 0) {
                if (n2 % 2 == 0) {
                        if (n3 % 2 > 0) {
                                printf("Green");
                        }
                }
        }

        return 0;
}
