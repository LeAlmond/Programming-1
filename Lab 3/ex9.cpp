#include <stdio.h>

int main()
{
        int degrees;

        printf("%s", "Enter an Weight " );
        scanf("%i",&degrees);

        if (degrees >= 80) {
                if (degrees <= 99) {
                        printf("Warm");
                }
                else if(degrees >= 110) {
                        if (degrees <= 120) {
                                printf("Hot");
                        }
                        else {
                                printf("Very Hot");
                        }
                }
                else printf("Not Applicable");
        }
        else  {
                printf("Not Applicable");
        }

        return 0;
}
