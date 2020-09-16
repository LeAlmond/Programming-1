#include <stdio.h>

int main()
{
        int j, count, value;
        count = 1;

        printf("Enter a number ");
        scanf("%i", &j);

        while (j <= 7) {
                count = 1;
                while (count < 13) {
                        value = j * count;
                        printf("%d x %d = %d, ",j,count, value);
                        count++;
                }
                j++;
                printf(" \n");
        }
        return 0;
}
