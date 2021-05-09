#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

        int array[21], Index, SecInd, cur_num, search;

        srand(time(0));

        for (Index = 0; Index < 21; Index++) {

                array[Index] = 6 + rand()% 7*5;

                cur_num = array[Index];

                if (array[Index-1]<=cur_num) {
                  array[Index] = cur_num;
                  continue;
                }


        }

        for (Index = 0; Index < 21; Index++) {

                printf("%d\t", array[Index]);
                printf("%d\n",Index );

        }

        printf("Enter a number to Search for....");
        scanf("%d", &search);

        for (Index = 0; Index < 21; Index++) {

                cur_num = array[Index];

                for (SecInd = Index; SecInd < 21; SecInd++) {

                        (array[SecInd] > array[Index]) ? cur_num = array[SecInd], array[SecInd] = array[Index]: cur_num = cur_num;
                        array[Index] = cur_num;

                }
                printf("%d\t", array[Index]);
        }

        printf("\n");

        if (search > array[11]) {
                SecInd = 10;
                Index = 0;
        }
        else {
                SecInd = 21;
                Index = 11;
        }

        while (Index <= SecInd) {
          if (search == array[Index]) {
                  printf("Found search variable inbetween array array %d and %d\n", SecInd-10, SecInd );
                  printf("Number %d was found at position %d of the array\n",search, Index );
                  break;
          }
          Index++;
        }

        return 0;
}
