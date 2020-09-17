#include <stdio.h>
#include <math.h>

int main()
{
        int num, sqr, cbe;

        printf("Please eneter a number ");
        scanf("%d", &num);

        sqr = pow(num, 2);
        cbe = pow(num, 3);

        printf("the area of %d is %d and the cube is %d\n", num, sqr, cbe);

        return 0;
}
