## Welcome to the Lab Repository

Here I will be posting completed labs and basic explanations for the labs that have been completed in Utechs Bsc. in Computing program, Programming 1 module

### Lab 1

In lab 1 we covered the basic's of doing math in C. This consisted of some basic addition, subtration, division and multiplications. The restrictions whilst doing this lab were as listed below

 - No And
 - No Or
 - No NotEqual
 
 ### Excercise 1
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

Ask the user for a number k. if k exceeds 26, then display “Blue”.
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

For more details see [Lab 3](https://github.com/LeAlmond/Programming-1/tree/master/Lab%203).

For more details see [Lab 4](https://github.com/LeAlmond/Programming-1/tree/master/Lab%204).
