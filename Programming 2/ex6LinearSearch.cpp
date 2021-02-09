#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

        int values[5], cnt, cnt2, temp, search;

        //srand(time(0));

        for (cnt = 0; cnt < 5; cnt++) {

                values[cnt] = 10+rand() % 40;
        }

        for (cnt = 0; cnt < 5; cnt++) {

              temp = values[cnt];

              for (cnt2 = cnt; cnt2 < 5; cnt2++) {

                        (values[cnt2] > values[cnt]) ? temp = values[cnt2], values[cnt2] = values[cnt]: temp = temp;
                        values[cnt] = temp;

               }

               printf("Enter a number to Search for....");
               scanf("%d", &search);

               for(cnt = 0; cnt < 5; cnt++) {
                 if (search == values[cnt]) {
                  printf("Number %d was found at position %d of the array\n",search, cnt );
                  break;
                 }
               }
        }

        printf("\nThe largest Value is %d ", temp);

        return 0;
}
