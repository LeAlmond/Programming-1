#include <stdio.h>

int main()
{
        int items;
        float price = 80.05;

        printf("%s", "Enter an Weight " );
        scanf("%i",&items);

        if (items >= 10) {
                if (items <= 18) {
                        price = price * .95;
                        printf("Final Price is $%.2f ", price);
                }
                else if (items <= 26) {
                        price = price * .945;
                        printf("Final Price is $%.2f ", price);
                }
                else {
                        price = price * .9185;
                        printf("Final Price is $%.2f ", price);
                }
        }
        return 0;
}
