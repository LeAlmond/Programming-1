#include <stdio.h>

int main()
{
        float p1, p2, total, gct, gctValue, finalTotal;
        gct = 0.15;

        printf("Enter the first price\n");
        scanf("%f", &p1);

        printf("Enter the second price\n");
        scanf("%f", &p2);

        total = p1 + p2;
        gctValue = total * gct;
        finalTotal = total + gctValue;

        printf("Sub total: $%.2f\nTotal GCT: $%.2f\nFinal Total: $%.2f", total, gctValue,finalTotal);

        return 0;
}
