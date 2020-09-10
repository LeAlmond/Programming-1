#include <stdio.h>

int main()
{
        int items;
        float price, discount;
        price = 80.05;
        discount = 0;

        printf("%s", "Enter an Price " );
        scanf("%i",&items);

        if (items >= 10) {
                if (items <= 18) {
                        discount = .05;
                }
                else if (items <= 26) {
                        discount = .055;
                }
                else {
                        discount = .0815;
                }
        }
        discount = price * discount;
        price = price - discount;
        printf("Final Price is $%.2f Discount is $%.2f", price, discount);

        return 0;
}
