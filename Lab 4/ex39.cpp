#include <stdio.h>

int main()
{
        int cnt = 0, pos = 0, b[7]={23, 200, 19, -5, 27, 28, 19};
        bool flag = false;

        while (cnt < 7 && flag != true) {
                if(b[cnt] < 0) {
                        pos = cnt;
                        flag = true;
                }
                cnt++;
        }
        if(flag == true) {
                printf("first negative value is %d", pos);
        }

        return 0;
}
