#include <stdio.h>

int main()
{
        int num;

        printf("Enter a number ");
        scanf("%d", &num);

        while (num <= 0) {
                printf("Enter a number ");
                scanf("%d", &num);
        }

        printf("%d is a positive number", num);

        return 0;
}
