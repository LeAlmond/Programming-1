#include <stdio.h>

int main()
{
        float withdraw = 0, dailywithdraw = 0;

        printf("Enter amount to Withdraw\n");
        scanf("%f",&withdraw);
        dailywithdraw = withdraw + dailywithdraw;

        while (withdraw != -9 && dailywithdraw < 500) {
                if (dailywithdraw < 501) {
                  if (withdraw > 0) {
                    dailywithdraw = withdraw + dailywithdraw;
                    printf("Enter amount to Withdraw\n");
                    scanf("%f",&withdraw);
                  }
                }
                else {
                  withdraw = -9;
                }
        }
        if (dailywithdraw > 500) {
          printf("Amount exceeds Max allowed'\n");
          dailywithdraw = dailywithdraw + (500 - dailywithdraw);
        }
        printf("you have withdrawn $%.2f '\n", dailywithdraw);
        return 0;
}
