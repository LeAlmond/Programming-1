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
                else if(age <= 21) {
                        printf("Orange");
                }
        }

        return 0;
}
