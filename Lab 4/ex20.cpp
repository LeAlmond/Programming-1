#include <stdio.h>
int main()
{
        int b = 0;
        float q = 12.25, sub = 0;

        printf("Enter a number ");
        scanf("%d",&b);

        while (b != -1) {
                switch(b) {
                case 7:
                        sub = -2.25;
                        printf("2.25 has been subtracted from the total\n");
                        break;
                case 3:
                        sub = 10;
                        printf("10 has been added to the total\n");
                        break;
                case 4:
                        sub = 12;
                        printf("12 has been added to the total\n");
                        break;
                default:
                        sub = 0;
                        break;
                }
                printf("Enter a number ");
                scanf("%d",&b);
                q = q + sub;
        }
        printf("The total is %.2f", q);

        return 0;
}
