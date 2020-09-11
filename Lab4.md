# Lab 4

In lab 4 we focused on doing the same general things as in lab 3 but with a few more restrictions. The restrictions whilst doing this lab were as listed below

 * No And
 * No Or
 * No NotEqual
 * No Equal
 * No Math(excluding Greater than, Less Than)

#### Excercise 1

> Ask the user to enter two age's, and return "Same" if the two ages are the same, return "Different" if they are not the same.

```c
#include <stdio.h>

int main()
{
        int a1, a2;

        printf("%s","Enter first age ");
        scanf("%i",&a1 );

        printf("%s","Enter second age ");
        scanf("%i",&a2 );

        if (a1 > a2) {

                printf("Different");
        }

        else if (a1 < a2 ) {

                printf("Different");
        }
        else{

                printf("Same");
        }

        return 0;
}
```

#### Excercise 2

> Ask the user to enter 3 age's, and return the eldest.

```c
#include <stdio.h>

int main()
{
        int a1, a2, a3, max;

        printf("%s","Enter first age ");
        scanf("%i",&a1 );

        printf("%s","Enter second age ");
        scanf("%i",&a2 );

        printf("%s","Enter second age ");
        scanf("%i",&a3 );

        max = a1;

        if (a2 > max) {

                max = a2;
        }

        if (a3 > max) {

                max = a3;

        }

        printf("Eldest %i",max );

        return 0;
}
```
#### Excercise 5

> Ask the user for 8 numbers. then display how many are above 20 (using a while loop)

#### Excercise 6

> Ask the user for 7 numbers. display the total of all the numbers (using a while loop)

#### Excercise 7

> Display the sum all odd numbers from 1 to 15 (using a while loop)

#### Excercise 8

> Ask the user for a number b, then display the product of all numbers from 1 to b (using a while loop)

#### Excercise 9

> Ask the user for 8 numbers. then display the smallest number (using a while loop)

For more details see
---
[Lab 4](https://github.com/LeAlmond/Programming-1/tree/master/Lab%204)
---

[Home Page](./index.html)
