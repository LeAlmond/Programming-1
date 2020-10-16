#include <stdio.h>

int main()
{
        int password = 0, attempt = 0, cpe =1234;

        while (attempt < 5 && password != cpe) {
                printf("Enter password\n");
                scanf("%d",&password);
                attempt++;
        }
        if (attempt != 5) {
          printf("Access Granted\n");
        }
        else {
          printf("You are locked out\n");
        }

        return 0;
}
