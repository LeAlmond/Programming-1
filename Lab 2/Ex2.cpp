#include <stdio.h>

int main()
{
        float p1, p2;

        printf("%s","Enter the first Price ");
        scanf("%f",&p1);

        printf("%s","Enter the second Price ");
        scanf("%f",&p2);

        if (p1 + p2 <= 100.76) {
                printf("%s\n","Orange");
        }
        else {
                printf("%s\n","Blue" );
                printf("%s\n","Green" );
        }

        return 0;
}
