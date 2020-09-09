#include <stdio.h>

int main()
{
        float y = 1;
        float x = 1;

        printf("%s","Enter GCT Percent ");
        scanf("%f\n",&x);

        printf("%s","Enter a Price ");
        scanf("%f\n",&y);

        x= (y * (x/100));
        y= (y + x);

        printf("%s %.2f\n","Total GCT is $", x);
        printf("%s %.2f\n","Your Total is $", y);

        return 0;
}
