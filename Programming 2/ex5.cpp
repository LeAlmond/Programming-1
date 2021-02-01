#include <stdio.h>
#include <stdlib.h>

int main() {

        int id[20], cnt = 0;
        float grade[20];


        printf("please enter id number %d\n", cnt);
        scanf("%d", &id[cnt]);

        printf("please enter grade\n");
        scanf("%f", &grade[cnt]);

        cnt++;

        while (id[cnt] > -1 and cnt < 20) {

                printf("please enter id number %d\n", cnt);
                scanf("%d", &id[cnt]);

                if (id[cnt] > 0) {

                  printf("please enter grade\n");
                  scanf("%f", &grade[cnt]);

                  (grade[cnt] > 100) ? grade[cnt] = 100:(grade[cnt] < 0) ? grade[cnt] = 0: grade[cnt] = grade[cnt];

                  cnt++;
                }
        }

        cnt--;

        while (cnt >=0) {

                printf("%d\t", id[cnt]);
                printf("%.2f\n", grade[cnt]);

                cnt--;
        }

        return 0;
}
