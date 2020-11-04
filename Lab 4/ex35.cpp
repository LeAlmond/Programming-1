#include <stdio.h>

int main()
{
        int cnt = 0, greater = 0;
        float sum, largest = 0, values[7];

        while (cnt < 7) {
                printf("Enter a Value ");
                scanf("%f",&values[cnt]);
                if (values[cnt] > 19) {
                  greater++;
                }
                if (values[cnt] > largest) {
                  largest = values[cnt];
                }
                cnt++;
        }
        sum = values[7] + values[6] + values[5] + values[4];
        printf("The sum of the last 4 elements is %.2f\n",sum);
        printf("The largest value is %.2f\n",largest);
        printf("The Total amount of value's greater than 19 is %d\n",greater);

        return 0;
}
