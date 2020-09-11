#include <stdio.h>

int main()
{
        int items;
        float price, additional;
        price = 450;
        additional = 0;

        printf("%s", "Enter an Price " );
        scanf("%i",&items);

        if (items <= 12) {
                additional = 45;
        }
        else if (items <= 17) {
                additional = 35.50;
        }
        else {
                additional = 0;
        }

        price = price + additional;
        printf("Final Price after Additional cost is $%.2f additional cost is $%.2f", price, additional);

        return 0;
}
