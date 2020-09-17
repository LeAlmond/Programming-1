#include <stdio.h>
#include <math.h>

int main()
{
        int side, peri, area;

        printf("Please enter the length of one side of  square\n");
        scanf("%d", &side);

        peri = side * 4;
        area = pow(side, 2);

        printf("The area of the square is %d and the perimeter is %d", area, peri);

        return 0;
}
