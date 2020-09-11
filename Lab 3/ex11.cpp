#include <stdio.h>

int main()
{
        int kWh;
        float rate;
        rate = 25;

        printf("Enter total number of KWh ");
        scanf("%i", &kWh);

        if(kWh >= 190)
        {
                if(kWh <= 249) {
                        rate = 30;
                }
                else if(kWh <= 289) {
                        rate = 32.25;
                }
                else if (kWh >= 300) {
                        rate = 40;
                }
        }

        printf("Rate is $%.2f/hour \n", rate);
        printf("Total $%.2f", kWh*rate);

        return 0;
}
