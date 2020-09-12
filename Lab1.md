# Lab 1

In lab 1 we covered the basic's of doing math in C. This consisted of some basic addition, subtraction, division and multiplications. The restrictions whilst doing this lab were as listed below

 * No And
 * No Or
 * No NotEqual

#### Excercise 1

 > Write a program that:

 (1) asks the user for a temperature value
 (2) displays that value, 30 and 13.89

#### Excercise 2

 > Write a program that:

 (1) lets j = 45.10
 (2) asks the user for a number g
 (2) increases j by 10.00% if the g is 3. If the g is not 3, then j is to be decreased by 10%
 (3) displays j

#### Excercise 3

> Allow a user to enter a value as GCT and a item price, then calculate the total GCT and Total Price of the item.

```c
#include <stdio.h>

int main()
{
        float y, x;
        x = 1;
        y = 1;

        printf("%s","Enter GCT Percent ");
        scanf("%f\n",&x);

        printf("%s","Enter a Price ");
        scanf("%f\n",&y);

        x= (y * (x/100));
        y= (y + x);

        printf("%s %.2f\n","Total GCT is $", x);
        printf("%s %.2f\n","Your Total is $", y);

        return 0;
}
```
#### Excercise 4

> Write a program that:

(1) asks the user for three body weights
(2) places the sum of last two weights into k
(3) decreases k by the first weight
(4) displays all three weights and k

#### Excercise 5

> Write a program that:

(1) lets m = 40
(2) asks the user for two ages
(3) increases m by the first age only if the second is lower than the first
(4) displays m

For more details see [Lab 1](https://github.com/LeAlmond/Programming-1/tree/master/Lab%201)

[Home Page](./index.html)
