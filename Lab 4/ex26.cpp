#include <stdio.h>

int main()
{
        float withdrawalAmt = 0, totalAmt = 0;

        printf("Enter the amount you'd like to withdraw\nEnter -9 if you'd like to exit the ATM\n");
        scanf("%f",&withdrawalAmt);
        totalAmt = totalAmt + withdrawalAmt;

        while(withdrawalAmt !=-9 && totalAmt < 500) {
                printf("Enter the amount you'd like to withdraw\nEnter -9 if you'd like to exit the ATM\n");
                scanf("%f",&withdrawalAmt);
                if((totalAmt + withdrawalAmt) > 500) {
                        withdrawalAmt = -9;
                        totalAmt = totalAmt + withdrawalAmt;
                }
                else{
                        totalAmt = totalAmt + withdrawalAmt;
                }
        }

        if(totalAmt > 500)
                printf("Amount exceeds max allowed\n");
        return 0;
}
