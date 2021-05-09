#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const char* Student_format = "%d, %s, %d, %.2f";

struct student {
        int id;
        int age;
        char name[20];
        float gpa;
} student;

int main() {

        struct student s1;

        printf("Please enter student Id number, Name, Age and GPA:\n");

        scanf("%d %s %d %f",&s1.id,s1.name,&s1.age,&s1.gpa);

        printf(Student_format,s1.id,s1.name,s1.age,s1.gpa);

        return 0;
}
