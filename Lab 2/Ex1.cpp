#include <stdio.h>

int main()
{
        int k;

        printf("%s","Enter a Number ");
        scanf("%i",&k);

        if (k > 26) {
                printf("%s\n","Blue");
        }
        else {
                printf("%s\n","Red" );
        }

        return 0;
}
