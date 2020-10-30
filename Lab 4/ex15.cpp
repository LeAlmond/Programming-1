#include <stdio.h>

int main()
{
        int age, cnt = 1, pos = 0;

        while (cnt <= 8 && age != -1)
        {
                printf("\nEnter age %d ",cnt);
                scanf("%d",&age);
                if (age == 10) {
                        pos = cnt;
                }
                cnt++;
        }
        if (pos != 0) {
                printf("The first ten was entered at position %d\n", pos);
        }
        else{
                printf("wasn't there\n");
        }
        return 0;
}
