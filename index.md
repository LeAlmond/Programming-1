## Welcome to the Lab Repository

Here I will be posting completed labs and basic explanations for the labs that have been completed in Utechs Bsc. in Computing program, Programming 1 module

### Lab 1

In lab 1 we covered the basic's of doing math in C. This consisted of some basic addition, subtration, division and multiplications. The restrictions whilst doing this lab were as listed below

 - No And
 - No Or
 - No NotEqual
 
### Excercise 1
 
 Allow a user to enter a value as GCT and a item price, then calculate the total GCT and Total Price of the item.
 ```markdown
#include <stdio.h>

int main()
{
        float y = 1;
        float x = 1;

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

For more details see [Lab 1](https://github.com/LeAlmond/Programming-1/tree/master/Lab%201).

### Lab 2

In lab 2 we focused mainly on comparing values to other values and returning a variety of other values.  The restrictions whilst doing this lab were as listed below

 - No And
 - No Or
 - No NotEqual

### Excercise 6

Set k to 105.10. Ask the user for two item prices. If they (the prices) are different increase k by 10.20,
otherwise decrease k by 29.25. Display the final k.
```markdown
#include <stdio.h>

int main()
{
        int m = 40,  n = 10, v1 = 13, v2 =67;
        int n1, n2, n3;

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

### Excercise 7

Ask the user for three ages. If all the ages exceed 30, then display “Green” otherwise display “Blue”.
```markdown
#include <stdio.h>

int main()
{
        int a1, a2, a3, a = 30;

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

For more details see [Lab 2](https://github.com/LeAlmond/Programming-1/tree/master/Lab%202).

### Lab 3

In lab 3 we focused mainly on doing a bit more maths with some variation to mix things up a bit.  The restrictions whilst doing this lab were as listed below

 - No And
 - No Or
 - No NotEqual

### Exercise 1

Ask the user for the price of and number of an item, if the number of the item is greater than 18 add 38.20 
```markdown
#include <stdio.h>

int main()
{
        int a1;
        float p1, p = 38.20;

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
### Exercise 4++

Allow a user to enter 3 values and calulate wether or not the value is a multiple of 3.If all the values are multiples of 3 print "Yep" if the second number is not a multiple of 3 print "no sah", if the first number is not a multiple of 3 print "could be" 
```markdown
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

For more details see [Lab 3](https://github.com/LeAlmond/Programming-1/tree/master/Lab%203).

### Lab 4

In lab 4 we focused on doing the same general things as in lab 3 but with a few more restrictions. The restrictions whilst doing this lab were as listed below

 - No And
 - No Or
 - No NotEqual
 - No Equal
 - No Math(excluding Greater than, Less Than)
 
### Excercise 1

Ask the user to enter two age's, and return "Same" if the two ages are the same, reutrn "Different" if they are not the same.
```markdown
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

### Excercise 2

Ask the user to enter 3 age's, and return the eldest.
```markdown
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

For more details see [Lab 4](https://github.com/LeAlmond/Programming-1/tree/master/Lab%204).
