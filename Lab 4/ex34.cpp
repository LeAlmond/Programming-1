#include <stdio.h>

int main()
{
        int cnt = 2, k;
        float itemprice = 0, lowest = 0;

        printf("Please Enter a Value ");
        scanf("%d", &k);

        while (k != -1) {
                cnt = 2;
                printf("Please enter price for item 1 $");
                scanf("%f", &itemprice);
                lowest = itemprice;

                while (cnt <= k) {
                        printf("Please enter price for item %d $",cnt);
                        scanf("%f", &itemprice);
                        if (lowest > itemprice) {
                                lowest = itemprice;
                        }
                        cnt++;
                }
                printf("The lowest item price is $%.2f \n",lowest);
                printf("Please Enter a Value ");
                scanf("%d", &k);
        }
        return 0;
}
