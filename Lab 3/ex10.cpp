#include <stdio.h>

int main()
{
        int items;
        float price, discount;
        price = 80.05;
        discount = 1;

        printf("%s", "Enter an Price " );
        scanf("%i",&items);

        if (items >= 10) {
                if (items <= 18) {
                        discount = .95;
                }
                else if (items <= 26) {
                        discount = .945;
                }
                else {
                        discount = .9185;
                }
        }
        price = price * discount;
        printf("Final Price is $%.2f", price);

        return 0;
}
