#include <stdio.h>

int main()
{
        int guest;
        float price, additional;
        price = 450;
        additional = 0;

        printf("%s", "Enter Total Guest " );
        scanf("%i",&guest);

        if (guest >= 12) {
                if (guest <= 17) {
                        additional = 35.50;
                }
        }
        else {
                additional = 45;
        }

        price = price + additional;
        printf("Final Price after Additional cost is $%.2f additional cost is $%.2f", price, additional);

        return 0;
}
