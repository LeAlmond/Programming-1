#include <stdio.h>
#include <stdlib.h>

int main() {

								char name[20];

								char middle;

								char last[20];


								printf("Please enter first name:\n");

								scanf("%s",name);

								printf("Please enter middle name:\n");

								scanf(" %c",&middle);

								printf("Please enter last name:\n");

								scanf("%s",last);


								name[0]=toupper(name[0]);

								middle=toupper(middle);

								last[0]=toupper(last[0]);

								printf("%s %c %s",name,middle,last);

								return 0;

}
