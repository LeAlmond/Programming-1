#include <stdio.h>
#include <string.h>

int main()
{
        int age, max;
        char mname[30], name[30];

        printf("\nEnter a Name ");
        scanf("%s",name);

        printf("\nEnter an age ");
        scanf("%d",&age);

        max = age;
        strcpy (mname,name);

        while (age != -1)
        {
                printf("\nEnter a Name ");
                scanf("%s",name);

                if (age > max) {
                        max = age;
                        strcpy (mname,name);
                }
                printf("\nEnter an age ");
                scanf("%d",&age);
        }
        printf("The eldest person is %d and there name is %s \n", max, mname);

        return 0;
}
