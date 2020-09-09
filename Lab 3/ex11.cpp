#include <stdio.h>
int main()
{
        int temp;

        printf("Enter a temperature\n");
        scanf("%d",&temp);

        if (temp >=80) {
                if  (temp<=99) {
                        printf("Temp is Warm");
                }
                else if (temp>=110) {
                        if (temp<=120)
                        {
                                printf("Temp is Hot");
                        }
                }
                else {
                        printf("Not applicable");
                }

                if (temp>=121) {
                        printf("Temp is very hot");
                }
        }

        else {
                printf("Not applicable");
        }

        return 0;
}
