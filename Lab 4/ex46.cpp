#include <stdio.h>

int main()
{
        float buying[14], buying2[14], selling[14], temp, buyavg, sellavg, highest = 0, totalbuy, totalsell, spread;
        int cnt = 0, sellex = 0, first;
        bool flag = false;


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

        while (cnt < 14 && flag == false) {
                if (selling[cnt] > 128) {
                  flag = true;
                  first = cnt;
                }
                cnt++;
        }

        cnt = 0;

        while (cnt < 14 && first) {
                if (buying[cnt] > 128)
                  ;
                cnt++;
        }

        cnt = 0;

        while (cnt < 14) {
                totalsell = totalsell + selling[cnt];
                totalbuy = totalbuy + buying[cnt];
                cnt++;
        }

        buyavg = totalbuy / 14;
        sellavg = totalsell / 14;
        spread = buyavg - sellavg;

        highest = buying[cnt];

        cnt = 0;

        while (cnt < 14) {
                buying2[cnt] = buying[cnt] * 1.035;

                if (buying2[cnt] > highest)
                  highest = buying2[cnt];
                cnt++;
        }

        printf("The Average buying for the 14 days is $%.2f \nThe average selling for the 14 days is $%.2f \n", buyavg, sellavg);
        printf("The spread for the average is $%.2f \n", spread);
        printf("The first day where the buying exceeded $128.00 was day %d\n", first);
        printf("The amount of days where the selling exceeded $128.00 is %d\n", sellex);
        printf("The Greatest inflated price is $%.2f\n", highest);

        return 0;
}
