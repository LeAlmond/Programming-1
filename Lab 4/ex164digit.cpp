#include <stdio.h>
int main()
{
        int num, cnt = 0, pass[4];

        printf("Enter your 4 digit pass code ");
        scanf("%d",&num);

        while (num > 0) {
                pass[cnt] = num % 10;
                num = num / 10;
                if (pass[cnt] >= 5) {
                        pass[cnt] = 9 - pass[cnt];
                }
                cnt++;
        }
        printf("\nEncrypted key is %d %d %d %d\n",pass[3],pass[2],pass[1],pass[0]);

        return 0;
}
