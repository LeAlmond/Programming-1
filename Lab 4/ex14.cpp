#include <stdio.h>

int main()
{
        int total, count, num;
        total = 0;
        count = 0;

        printf("To stop the program enter -1\n");
        printf("Please enter a number ");
        scanf("%d", &num);

        while (num != -1) {
                count = 0;
                total = 0;
                while (count < (num + 1)) {
                        total = total + count;
                        count++;
                }
                printf("The Total is %d\n", total);
                printf("Please enter a number ");
                scanf("%d", &num);
        }

        return 0;
}
