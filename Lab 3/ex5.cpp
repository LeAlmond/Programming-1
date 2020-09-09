#include <stdio.h>

int main()
{
        int age;

        printf("%s", "Enter an age " );
        scanf("%i",&age);

        if (age >= 10) {
                if (age <= 15) {
                        printf("Blue");
                }
        }

        return 0;
}
