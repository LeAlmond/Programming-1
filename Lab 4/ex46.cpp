#include <stdio.h>

int main()
{
        float buying[14], buying2[14], selling[14], temp, buyavg, sellavg, highest = 0;
        int cnt = 0, sellex = 0;


        while (cnt < 14) {
                printf("Please Enter Buying rate on day %d\n", (cnt + 1));
                scanf("%f",&temp);
                buying[cnt] = temp;

                printf("Please Enter Selling rate on day %d\n", (cnt + 1));
                scanf("%f",&temp);
                selling[cnt] = temp;

                cnt++;
        }

        cnt = 0;

        while (cnt < 14) {
                if (selling[cnt] > 128) {
                  sellex++;
                }
                cnt++;
        }

        cnt = 0;

        while (cnt < 14) {
                sellavg = sellavg + selling[cnt];
                buyavg = buyavg + buying[cnt];
                cnt++;
        }

        cnt = 0;

        while (cnt < 14) {
                temp = buying[cnt] * 1.035;
                buying2[cnt] = temp;

                if (temp > highest) {
                  highest = temp;
                }
                cnt++;
        }

        buyavg = buyavg / 14;
        sellavg = sellavg / 14;

        printf("The Average buying for the 14 days is $%.2f \nThe average selling for the 14 days is $%.2f \n", buyavg, sellavg);
        printf("The amount of days where the selling exceeded $128.00 is %d\n", sellex);
        printf("The Greatest inflated price is $%.2f\n", highest);

        return 0;
}
