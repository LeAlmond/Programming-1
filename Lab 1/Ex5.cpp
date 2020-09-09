#include <stdio.h>

int main()
{
        int m, a1, a2;
        m = 40;

        printf("Enter the first age\n");
        scanf("%d", &a1);

        printf("Enter the second age\n");
        scanf("%d", &a2);

        if(a1 > a2) {
                m = m + a1;
        }

        printf("\nM = %d", m);

        return 0;
}
