#include <stdio.h>

int main()
{
        int age, total;
        total = 0;
        age = 0;

        while (age != -1) {
                printf("Please enter an age ");
                scanf("%d", &age);
                if (age > 15) {
                        total++;
                      }
        }
        printf("The user has entered a total of %d ages\n", total);

        return 0;
}
