#include <stdio.h>

int main()
{
        int n1, n2;

        printf("%s", "Enter first number " );
        scanf("%i",&n1);

        printf("%s", "Enter second number " );
        scanf("%i",&n2);

        if (n1 > 40) {
                if (n2 > 40) {
                        printf("Grey");
                }
        }
        else{
                printf("Orange");
        }

        return 0;
}
