#include <stdio.h>

int main()
{
        int array1[8] = {34, 56, 47, 47, 87, 87, 0, 45}, array2[8] = {14, 87, 24, 0, 0, 43, 112, 67}, init, cnt = 0;

        while (cnt < 8 ) {
                init = array1 [cnt];
                array1 [cnt] = array2 [cnt];
                array2 [cnt] = init;
                cnt++;
        }

        cnt = 0;
        printf("Array 1 is: ");
        while (cnt < 8 ) {
                printf("%d,",array1[cnt]);
                cnt++;
        }
        cnt = 0;

        printf("\nArray 2 is: ");

        while (cnt < 8 ) {
                printf("%d,",array2[cnt]);
                cnt++;
        }

        return 0;
}
