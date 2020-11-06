#include <stdio.h>

int main()
{
        int cnt = 1, num, prod;

        printf("Enter a number ");
        scanf("%d", &num);

        while (num < 1 or num > 12) {
                printf("please enter a valid number ");
                scanf("%d", &num);
        }
        while (cnt <= 12) {
                prod = cnt * num;
                printf("%d x %d = %d\n", num, cnt, prod);
                cnt++;
        }

        return 0;
}
