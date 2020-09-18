#include <stdio.h>

int main()
{
        int age, total;
        total = 0;

        printf("To stop the program enter -1\n");
        printf("Please enter an age ");
        scanf("%d", &age);

        while (age != -1) {
                if (age > 15) {
                        total++;
                }
                printf("Please enter an age ");
                scanf("%d", &age);

        }
        printf("The user has entered a total of %d ages\n", total);

        return 0;
}
