#include <stdio.h>

int main()
{
        int cnt = 0, cnt1 = 0;

        while (cnt < 5 ) {
                cnt1 = 0;
                while (cnt1 < 6 ) {
                        printf("*");
                        cnt1++;
                }
                printf("*\n");
                cnt++;
        }
        return 0;
}
