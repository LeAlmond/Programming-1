#include <stdio.h>

int main()
{
        float w1, w2, w3, k;

        printf("Enter the first weight\n");
        scanf("%f", &w1);

        printf("Enter the secong weight\n");
        scanf("%f",&w2);

        printf("Enter the third weight\n");
        scanf("%f",&w3);

        k = (w2 + w3) - w1;

        printf("\nFirst weight: %.2f\nSecond weight: %.2f\nThird weight: %.2f\nk = %.2f", w1, w2, w3, k);

        return 0;

}
