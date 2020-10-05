///Ask the user for 7 item prices. Determine then display the average of all prices in the range $105.00 - $205.00 inclusive.

#include <stdio.h>
int main()
{
        int cnt = 0, inr = 0;
        float price;

        while (cnt < 7) {
                printf("Enter the price of item %d ",(cnt+1));
                scanf("%f", &price);
                if (price >= 105) {
                        if (price <= 205) {
                                inr++;
                        }
                }
                cnt++;
        }
        printf("The total number of items that are within range are %d", inr);
        return 0;
}
