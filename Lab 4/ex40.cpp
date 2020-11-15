#include <stdio.h>

int main()
{
        int cnt = 7, init, b[8]={23, 200, 19, -5, 27, 28, 19, 23};

        init = b[7];
        while (cnt > 0) {
                b[cnt] = b[cnt-1];
                cnt--;
        }
        b[0] = init;

        cnt = 0;
        while (cnt < 8 ) {
                printf("%d,", b[cnt]);
                cnt++;
        }

        return 0;
}
