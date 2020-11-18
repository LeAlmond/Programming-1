#include <stdio.h>

int main()
{
        int atm = 1;
        float balance = 100, trans = 0, totaltrans = 0;

        while (atm != -1) {
                printf("Please Select an option\n");
                printf("1 for Withdraw \n2 For Deposit \n3 for current balance \n0 for Exit\n");
                scanf("%d",&atm);
                switch(atm) {
                case 1:
                        printf("Please Enter an Amount to Withdraw\n");
                        scanf("%f", &trans);
                        if ((trans + totaltrans) <= 400 && (balance - trans) >= 10) {
                                totaltrans = trans + totaltrans;
                                balance = balance - trans;
                                printf("You Have Withdrawn $%.2f\n",trans);
                        }
                        else{
                                printf("You have exceed your max withdrawl Amount\n");
                        }
                        break;
                case 2:
                        printf("Please Enter an Amount to Deposit\n");
                        scanf("%f", &trans);
                        balance = balance + trans;
                        printf("You Have Deposited $%.2f\n",trans);
                        break;
                case 3:
                        printf("Your Current Balance is $%.2f\n",balance);
                        break;
                case 0:
                        printf("Thank You, Goodbye");
                        atm = -1;
                        break;
                default:
                        printf("Please enter valid input\n");
                        break;
                }
        }

        return 0;
}
