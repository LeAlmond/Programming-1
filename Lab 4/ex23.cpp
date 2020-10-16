#include <stdio.h>

int main()
{
        int num = 0;

        printf("Enter a number ");
        scanf("%d",&num);

        if(num % 4 == 0) {
                if(num % 6 == 0) {
                printf("Blue");
              }
              else{
                printf("Green");
              }
        }
        else {
                printf("Green");
        }
        return 0;
}
