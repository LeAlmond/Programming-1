# Lab 2

In lab 2 we focused mainly on comparing values to other values and returning a variety of other values.  The restrictions whilst doing this lab were as listed below

 * No And
 * No Or
 * No NotEqual

#### Excercise 1

> Ask the user for a number k. if k exceeds 26, then display “Blue”.

#### Excercise 2

> Ask the user for two item prices. If their total is not more than $100.74, then display “Orange”, otherwise display “Blue” then display “Green”.

#### Excercise 3

> Ask the user for three ages. If all ages are equal to 50 then display “Pencil”.

#### Excercise 4

> Set h to 12 then ask the user for two numbers. If the first number is not more than 34 and the second number exceeds 87 double h then increase h by 3. Otherwise triple h. Display the final h.

#### Excercise 5

> Let m equal to 40. Ask the user for three numbers. If the first two numbers are equal 13 and the third is not more than 67 then reduce m by 10. Display the final m.

#### Excercise 6

> Set k to 105.10. Ask the user for two item prices. If they (the prices) are different increase k by 10.20, otherwise decrease k by 29.25. Display the final k.

```c
#include <stdio.h>

int main()
{
        int m, n, v1, v2;
        int n1, n2, n3;
        m = 40 ;
        n = 10;
        v1 = 13;
        v2 =67;

        printf("%s","Enter the first Number ");
        scanf("%i",&n1);

        printf("%s","Enter the second Number ");
        scanf("%i",&n2);

        printf("%s","Enter the third Number ");
        scanf("%i",&n3);

        if (n1 + n2 == v1)
        {
                if (n3 <= v2)
                {
                        m = m - n;
                }

        }

        printf("%i\n",m);

        return 0;
}
```

#### Excercise 7

> Ask the user for three ages. If all the ages exceed 30, then display “Green” otherwise display “Blue”.

```c
#include <stdio.h>

int main()
{
        int a1, a2, a3, a;
        a = 30;

        printf("%s","Enter the first age ");
        scanf("%i",&a1);

        printf("%s","Enter the second age ");
        scanf("%i",&a2);

        printf("%s","Enter the third age ");
        scanf("%i",&a3);

        if (a1 > a)
        {
                if (a2 > a)
                {
                        if (a3 > a)
                        {
                                printf("%s\n","Green");
                        }
                        else
                        {
                                printf("%s\n","Blue" );
                        }
                }
                else
                {
                        printf("%s\n","Blue" );
                }
        }
        else
        {
                printf("%s\n","Blue" );
        }

        return 0;
}
```

For more details see [Lab 2](https://github.com/LeAlmond/Programming-1/tree/master/Lab%202)

[Home Page](./index.html)
