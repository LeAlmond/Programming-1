#include <stdio.h>

int main()
{
        float withdraw, dailywithdraw;

        while (withdraw != -9) {
                printf("Enter amount to Withdraw\n");
                scanf("%f",&withdraw);

                if ((withdraw + dailywithdraw) < 501) {
                  if (withdraw > 0) {
                    dailywithdraw = withdraw + dailywithdraw;
                  }
                }
                else {
                  printf("Amount exceeds Max allowed'\n");
                  withdraw = -9;
                }
        }
        printf("you have withdrawn $%.2f '\n", dailywithdraw);
        return 0;
}
