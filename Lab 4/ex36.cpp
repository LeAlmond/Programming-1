#include <stdio.h>

int main()
{
        int cnt = 0, greater = 0;
        float sum, largest = 0, values[7] = {78.50, 46.00, 78.50, 100.40, 12.00, 19.50, 19.55};

        while (cnt < 7) {
                if (values[cnt] > 19) {
                  greater++;
                }
                cnt++;
        }
        while (cnt > 3) {
                sum = sum + values[cnt];
                cnt--;
        }
        for (cnt = 0; cnt <= 7; cnt++) {
                largest = values[cnt];
        }

        printf("The sum of the last 4 elements is %.2f\n",sum);
        printf("The largest value is %.2f\n",largest);
        printf("The Total amount of value's greater than 19 is %d\n",greater);

        return 0;
}
