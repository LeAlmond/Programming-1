#include <stdio.h>
#include <math.h>

int main()
{
        int height, width, peri, area;

        printf("Please enter the height of of the rectangle\n");
        scanf("%d", &height);

        printf("Please enter the width of of the rectangle\n");
        scanf("%d", &width);

        peri = (height * 2) + (width * 2);
        area = height * width;

        printf("The area of the rectangle is %d and the perimeter is %d", area, peri);

        return 0;
}
