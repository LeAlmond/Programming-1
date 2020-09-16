#include <stdio.h>

int main()
{
        int j, count, value;
        count = 1;

        printf("Enter a number ");
        scanf("%i", &j);

        while (count < 13) {
          value = j * count;
                printf("%d x %d = %d\n",j ,count, value);
                count++;
                }

        return 0;
}
