#include <stdio.h>

int main()
{
        int m, count = 0, ir = 0;
        float avg, n, q, ip, total;

        printf("Enter a number ");
        scanf("%d",&m);

        printf("Enter a lower range Decimal ");
        scanf("%f",&n);

        printf("Enter an Upper range Decimal ");
        scanf("%f",&q);

        while (count < m) {
                printf("Enter an item price ");
                scanf("%f",&ip);
                if (ip > n) {
                        if (ip < q) {
                                total = total + ip;
                                ir++;
                        }
                }

                count++;
        }
        if(ir != 0) {
                avg = total / ir;
                printf("The average of the number in range is %.2f", avg);
        }
        else {
                printf("Nothing in range");
        }
        return 0;
}
