#include <stdio.h>

int main()
{
        int array1[10] = {13, 14, 18, -9, 3, 14, 6, -7, 12, 14};
        int array2[10] = {73, 74, 28, 4, 31, 4, 16, -8, 15, -4};
        int array3[10] = {3};
        int smol = 0, cnt = 0;

        while (cnt < 10) {
                array3[cnt] = smol;
                smol+=4;
                cnt++;
        }


        cnt = 10;

        while (cnt >= 0) {
                smol = array1[cnt];
                if(array2[cnt] < smol) {
                        smol = array2[cnt];
                }
                if(array3[cnt] < smol) {
                        smol = array3[cnt];
                }

                printf("%d\t %d\t %d\t smallest value is %d\t\n", array1[cnt], array2[cnt], array3[cnt], smol);
                cnt--;
        }

        return 0;
}
