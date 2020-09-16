#include <stdio.h>

int main()
{
        int j, count, value;
        count = 1;
        j = 1;

        while (j <= 7) {
                count = 1;
                while (count < 12) {
                        value = j * count;
                        printf("%d x %d = %d, ",j,count, value);
                        count++;
                }
                j++;
                printf("\n \n");
        }
        return 0;
}
