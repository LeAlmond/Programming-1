#include <stdio.h>

int main()
{
        int code = 0;
        float  codeprice, price, totalprice;

        printf("Enter a Price ");
        scanf("%f",&price);
        totalprice = price;

        while (code != -1) {
                printf("Enter a Price code from 1-4 ");
                scanf("%d",&code);
                switch(code){
                      case 1:
                            codeprice = 10.00;
                            printf("$10 has been added to the total Price\n");
                      break;
                      case 2:
                            codeprice = 15.50;
                            printf("$15.50 has been added to the total Price\n");
                            break;
                      case 3:
                            codeprice = -8.50;
                            printf("$8.50 has been subtracted to the total Price\n");
                            break;
                      case 4:
                            codeprice = 1.50;
                            printf("$1.50 has been added to the total Price\n");
                            break;
                      default:
                            codeprice = 0;
                            printf("Please enter valid input\n");
                            break;
                    }
            totalprice = totalprice + codeprice;
        }
        printf("The total price is $%.2f", totalprice);

        return 0;
}
