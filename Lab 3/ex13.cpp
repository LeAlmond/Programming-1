///Ask the user for 7 item prices. Determine then display the average of all prices in the range $105.00 - $205.00 inclusive.

#include <stdio.h>
int main()
{
        int cnt = 0, inr = 0;
        float price, average = 0;

        while (cnt < 7) {
                printf("Enter the price of item %d ",(cnt+1));
                scanf("%f", &price);
                if (price >= 105) {
                        if (price <= 205) {
                                average = average + price;
                                inr++;
                        }
                }
                cnt++;
        }

        if (inr != 0) {
          average = average/inr;
        }
        
        printf("The average of the number of items that are within range is %.2f", average);
        return 0;
}
