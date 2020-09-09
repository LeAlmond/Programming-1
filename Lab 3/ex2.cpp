#include <stdio.h>

int main()
{
        int n1;

        printf("%s", "Enter a number " );
        scanf("%i",&n1);

        if (n1 % 2 > 0) {
                if (n1 >= 21) {
                        printf("%s %i","double the number is ", n1 * 2);
                }
        }

        return 0;
}
