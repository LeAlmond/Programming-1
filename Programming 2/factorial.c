#include <stdio.h>

int factfunc (int factorial,int integer) {

        int cnt;

        for (cnt = 1; cnt <= integer; ++cnt) {
                factorial *= cnt;
        }
        printf("factorial of %d = %d", integer, factorial);
        return factorial;
}

int main() {
        int factorial = 1, integer;


        printf("Please Enter an integer ");
        scanf("%d", &integer);

        if (integer < 0)
                printf("please enter a valid integer");
        else {
          factfunc(factorial, integer);
        }

        return 0;
}
