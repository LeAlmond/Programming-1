#include <stdio.h>

int main()
{
        int password = 0, attempt = 0, cpe =1234;

        printf("Enter password ");
        scanf("%d",&password);

        while (attempt < 3 && password != cpe) {
          printf("Incorrect password has been entered\n");
          printf("Enter password ");
          scanf("%d",&password);
          attempt++;
        }
        if (password == cpe) {
          printf("Correct password has been enterd \n");
        }
        else{
          printf("User has made too many attempts\n");
        }
        return 0;
}
