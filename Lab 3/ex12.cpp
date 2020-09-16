#include <stdio.h>
int main()
{
        int age;
        float cost;
        cost = 8;
        printf("Enter an age ");
        scanf("%i", &age);
        if(age >= 10) {
                if(age <= 18)
                        cost = 9.50;
                else if(age < 21)
                        cost = 10;
                else if(age <= 25)
                        cost = 9.25;
                else if (age >= 30)
                        if(age <= 45)
                                cost = 12;
        }

        printf("The total cost is $%.2f", cost);
        return 0;
}
