#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

        int origin[5], values[5], cnt, cnt2, temp;

        srand(time(0));

        for (cnt = 0; cnt < 5; cnt++) {

                values[cnt] = rand() % 40;
                origin[cnt] = values[cnt];
        }

        for (cnt = 0; cnt < 5; cnt++) {

              temp = values[cnt];

              for (cnt2 = cnt; cnt2 < 5; cnt2++) {

                        (values[cnt2] > values[cnt]) ? temp = values[cnt2], values[cnt2] = values[cnt]: temp = temp;
                        values[cnt] = temp;

               }

               printf("%d\t", origin[cnt]);
               printf("%d\t", values[cnt]);
               printf("%d\n",cnt );


        }

        printf("\nThe largest Value is %d ", temp);

        return 0;
}
