#include <stdio.h>

int main()
{
        int n1, n2, v1 = 34, v2 = 87;
        int h = 12;

        printf("%s","Enter the first Price ");
        scanf("%i",&n1);

        printf("%s","Enter the second Price ");
        scanf("%i",&n2);

        if (n1 <= v1)
        {
                if (n2 > v2)
                {
                        h = h * 2;
                        h = h + 3;
                }
                else
                {
                        h = h * 3;
                }
        }
        else
        {
                h = h * 3;
        }

        printf("%s %i\n","Final is ", h);

        return 0;
}
