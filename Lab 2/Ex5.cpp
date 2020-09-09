#include <stdio.h>

int main()
{
        int m = 40,  n = 10, v1 = 13, v2 =67;
        int n1, n2, n3;

        printf("%s","Enter the first Number ");
        scanf("%i",&n1);

        printf("%s","Enter the second Number ");
        scanf("%i",&n2);

        printf("%s","Enter the third Number ");
        scanf("%i",&n3);

        if (n1 + n2 == v1)
        {
                if (n3 <= v2)
                {
                        m = m - n;
                }

        }

        printf("%i\n",m);

        return 0;
}
