#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

        int values[5], cnt, cnt2, temp, search, min;

        srand(time(0));

        for (cnt = 0; cnt < 5; cnt++) {

                values[cnt] = 10+rand() % 40;
        }

        for (cnt = 0; cnt < 5; cnt++) {

                temp = values[cnt];

                for (cnt2 = cnt; cnt2 < 5; cnt2++) {

                        (values[cnt2] > values[cnt]) ? temp = values[cnt2], values[cnt2] = values[cnt]: temp = temp;
                        values[cnt] = temp;

                }

                printf("%d\t", values[cnt]);
                printf("%d\n",cnt );

        }

        printf("Enter a number to Search for....");
        scanf("%d", &search);

        if (search > values[2]) {
                cnt2 = 1;
                cnt = 0;
        }
        else {
                cnt2 = 4;
                cnt = 2;
        }

        while (cnt <= cnt2) {
          if (search == values[cnt]) {
                  printf("Found search variable inbetween array values %d and %d\n", cnt, cnt2 );
                  printf("Number %d was found at position %d of the array\n",search, cnt );
                  break;
          }
          cnt++;
        }

        return 0;
}
