#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

        int values[5], cnt, largest = 0;

        srand(time(0));

        for (cnt = 0; cnt < 5; cnt++) {

                values[cnt] = 30+rand() % 40;
        }

        for (cnt = 0; cnt < 5; cnt++) {

                (values[cnt] > largest) ? largest = values[cnt]: largest = largest;

                printf("%d\t", values[cnt]);

        }

        printf("\nThe largest Value is %d ", largest);

        return 0;
}
