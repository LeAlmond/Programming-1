#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void capitalize(char name[20],int age);
void capitalizebyreference(char name[20],int *ageptr);

int main() {

        char name[20];
        int age;
        int *ageptr;

        ageptr = &age;

        printf("Please Enter a Name\n");
        scanf("%s",name);
        printf("Please Enter an Age\n");
        scanf("%d",&age);

        capitalize(name,age);

        printf("%s\n",name );
        printf("%d\n",age );

        capitalizebyreference(name,ageptr);

        printf("%s\n",name );
        printf("%d\n",age );

        return 0;
}

void capitalize(char name[20],int age){

        name[0]=toupper(name[0]);
        age = age + 2;
        printf("%s\n",name);
        printf("%d\n",age);

}

void capitalizebyreference(char name[20],int *ageptr){

        name[0]=toupper(name[0]);
        *ageptr = *ageptr + 2;
        printf("%s\n",name);
        printf("%d\n",*ageptr);

}
