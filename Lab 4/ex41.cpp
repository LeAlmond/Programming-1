#include <stdio.h>

int main()
{
        int cnt = 0, input, total = 0;

        while (input < 43 or input > 53) {
            printf("Enter  number between 43-53\n");
            scanf("%d",&input);
            cnt = input - 2;
        }
        while (cnt < 55) {
            total = cnt + total;
            cnt++;
        }
        printf("The total is %d\n", total);

        return 0;
}
