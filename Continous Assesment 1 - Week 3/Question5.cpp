#include <stdio.h>

int main()
{
        int weightkg, weightlbs, shoe, heightft, heightIn;
        float  heightm;

        printf("Please enter your Weight in lbs\n");
        scanf("%d", &weightlbs);

        printf("Now enter your height in Feet then Enter inches Seperately\n");
        scanf("%d", &heightft);
        scanf("%d", &heightIn);

        printf("Now finally your shoe size\n");
        scanf("%d", &shoe);

        weightkg = weightlbs *  0.453592;
        heightm = ((heightft * 12) + heightIn) * 0.0254;

        printf("To confirm you weight %d lbs which is %d kg\n", weightlbs, weightkg);
        printf("and you are %dft %dIn tall which is %.2f m\n", heightft, heightIn, heightm);
        printf("and you wear size %d shoes\n", shoe);
        printf("%dlbs %dft %dIn Size %d", weightlbs, heightft, heightIn, shoe);

        return 0;
}
