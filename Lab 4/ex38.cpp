#include <stdio.h>

int main()
{
        int array1[10] = {13, 14, 18, -9, 3, 14, 6, -7, 12, 14};
        int array2[10] = {73, 74, 28, 4, 31, 4, 16, -8, 15, -4};
        int array3[10] = {3};
        int init, cnt = 0, cnt2 = 0;

        while (cnt < 10 ) {
                array3 [cnt + 1] = array3 [cnt] + 4;
                cnt++;
        }

        cnt = 0;

        while (cnt < 10 ) {
                init = array1[cnt];
                while (cnt2 < 10) {
                  if (array1[cnt2] < init) {
                    init = array1[cnt2];
                  }
                  cnt2++;
                }
                cnt++;

        }


        cnt = 0;

        printf("Array 1 is: ");
        while (cnt < 10 ) {
                printf("%d,",array1[cnt]);
                cnt++;
        }

        cnt = 0;

        printf("\nArray 2 is: ");
        while (cnt < 10 ) {
                printf("%d,",array2[cnt]);
                cnt++;
        }

        cnt = 0;

        printf("\nArray 3 is: ");

        while (cnt < 10 ) {
                printf("%d,",array3[cnt]);
                cnt++;
        }

        return 0;
}
