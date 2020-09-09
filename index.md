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

For more details see [Lab 2](https://github.com/LeAlmond/Programming-1/tree/master/Lab%202).

