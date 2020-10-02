#include <stdio.h>

int main()
{
        int num = 0, cnt = 0;

        printf("\nEnter a number ");
        scanf("%d",&num);

        while (num != -1 && cnt < 7)
        {
                cnt++;
                printf("\nEnter a number ");
                scanf("%d",&num);
        }

        printf("A total of %d numbers were entered\n",cnt);

        return 0;
}
