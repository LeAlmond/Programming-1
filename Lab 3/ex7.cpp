#include <stdio.h>

int main()
{
        int ws;

        printf("%s", "Enter an Wind Speed " );
        scanf("%i",&ws);

        if (ws >= 20) {
                if (ws <= 67) {
                        printf("Category 1 Hurricane");
                }
                else if(ws <= 87) {
                        printf("Category 2 Hurricane");
                }
                else if(ws <= 102) {
                        printf("Category 3 Hurricane");
                }
                else  {
                        printf("Category 4 Hurricane");
                }
        }
        else  {
                printf("Category 0 Hurricane");
        }

        return 0;
}
