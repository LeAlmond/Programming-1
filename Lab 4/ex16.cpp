#include <stdio.h>
int main()
{
        int num, cnt = 0, pass[4];

        while (cnt < 4)
        {
                printf("Enter digit %d of your 4 digit pass code ", (cnt + 1));
                scanf("%d",&num);

                if (num < 10) {
                        if (num >= 5) {
                                num = 9 - num;
                        }
                        pass[cnt] = num;
                        cnt++;
                }
                else{
                        printf("Please enter a valid number\n");
                }
        }
        printf("\nEncrypted key is %d %d %d %d\n",pass[0],pass[1],pass[2],pass[3]);

        return 0;
}
