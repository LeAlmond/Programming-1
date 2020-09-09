#include <stdio.h>

int main()
{
        int a1, a2, a3;

        printf("%s", "Enter first number " );
        scanf("%i",&a1);

        printf("%s", "Enter second number " );
        scanf("%i",&a2);

        printf("%s", "Enter second number " );
        scanf("%i",&a3);

        if (a1 <= 13) {
            if (a3 <= 13) {
                if (a2 <= 13) {

                        printf("Green");
                }
                else {
                                printf("Orange");
                }
            }
       }


        return 0;
}
