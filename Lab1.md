# Lab 1

In lab 1 we covered the basic's of doing math in C. This consisted of some basic addition, subtraction, division and multiplications. The restrictions whilst doing this lab were as listed below

 * No And
 * No Or
 * No NotEqual

#### Excercise 1

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

For more details see
---
[Lab 1](https://github.com/LeAlmond/Programming-1/tree/master/Lab%201)
---

[Home Page](./index.html)
