#include <stdio.h>

int main()
{
        int cnt = 0, input;

        while (cnt < 3 && (input < 23 or input > 33)) {
            printf("Enter  number between 23-33\n");
            scanf("%d",&input);
            cnt++;
        }
        if (input >= 23 && input <= 33) {
          printf("Valid input entered\n");
        }

        return 0;
}
