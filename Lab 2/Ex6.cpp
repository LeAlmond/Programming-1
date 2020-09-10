#include <stdio.h>

int main()
{
        float k , d , i;
        float p1, p2;
        k = 105.10;
        d = 29.25;
        i = 10.20;

        printf("%s","Enter the first Price ");
        scanf("%f",&p1);

        printf("%s","Enter the second Price ");
        scanf("%f",&p2);

        if (p1 == p2)
        {
                k = k - d;
        }
        else
        {
                k = k + i;
        }

        printf("%.2f\n", k);

        return 0;
}
