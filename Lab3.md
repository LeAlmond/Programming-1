# Lab 3

In lab 3 we focused mainly on doing a bit more math's with some variation to mix things up a bit.  The restrictions whilst doing this lab were as listed below

 * No And
 * No Or
 * No NotEqual

#### Exercise 1

> Ask the user for the price of and number of an item, if the number of the item is greater than 18 add 38.20

```c
#include <stdio.h>

int main()
{
        int a1;
        float p1, p;
        p = 38.20;

        printf("%s","Enter item price ");
        scanf("%f",&p1 );

        printf("%s","Enter item number ");
        scanf("%i",&a1 );

        if (a1 > 18) {

                printf("%s %.2f\n","$",p1 + p);
        }

        return 0;
}
```
#### Exercise 4++

> Allow a user to enter 3 values and calculate wether or not the value is a multiple of 3.If all the values are multiples of 3 print "Yep" if the second number is not a multiple of 3 print "no sah", if the first number is not a multiple of 3 print "could be"

```c
#include <stdio.h>

int main()
{
        int a1, a2;

        printf("%s", "Enter first number " );
        scanf("%i",&a1);

        printf("%s", "Enter second number " );
        scanf("%i",&a2);

        if (a1 % 3 == 0)
        {
                if (a2 % 3 == 0)
                {
                        printf("yep");
                }
                else printf("no Sah");
        }
        else printf("Could be");

        return 0;
}
```

For more details see [Lab 3](https://github.com/LeAlmond/Programming-1/tree/master/Lab%203)

[Home Page](./index.html)
