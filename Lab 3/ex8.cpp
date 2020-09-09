#include <stdio.h>

int main()
{
        int weight;

        printf("%s", "Enter an Weight " );
        scanf("%i",&weight);

        if (weight >= 120) {
                if (weight <= 150) {
                        printf("Light weight");
                }
                else if(weight >= 161) {
                        if (weight <= 210) {
                                printf("More than light weight");
                        }
                }
                else  {
                        printf("Not Sure");
                }
        }
        else  {
                printf("Not Sure");
        }

        return 0;
}
