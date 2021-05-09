/*
Author: Courtney Williams
Date: Feb 23, 2021
Description: Write a code that allows random numbers between 7 and 54 to be entered
 in an array. The array is an  integer array with 7 elements.
Use a module called smallest to output the smallest number in the array.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//The function is declared/ prototype
int rannum(int a[]);
int smallest(int b[]);
int main(void)
{
	void foo(),f();
	f();

	int b[2][2] = {{1},{3,4}};

	printf("%d \n", b[1][0]);

	char string1[] =  " ";
	char string2[] = {'t', 'e', 's', 't'};
	char string3[] = "WQ test";
	char string4[] = {'t', 'e', 's', 't', '\0'};
	int answer = 7, i, arr[5] = {1};

 	enum status {pass, fail, absent};
	enum status stud1, stud2, stud3;
	stud1 = pass;
	stud2 = absent;
	stud3 = fail;

	printf("%d %d %d\n", stud1, stud2, stud3);

	char str[25] = "Codequiz";
	printf("%s\n", str+2);



	for ( i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}

	printf("%s\n%s\n%s\n%s\n",string1,string2,string3,string4 );

	if (answer == 7) {
		puts("correct");
	}
	else{
		puts("incorrect");
	}

	printf("%s\n",answer == 7 ? "correct":"incorrect" );
	puts(answer == 7 ? "correct":"incorrect" );
	answer == 7 ? puts("correct"):puts("incorrect");

	srand(time(0));
	//declaration and initialization
	 int x = 25,nums[7]={0};

	 switch (x) {
		default: printf("One");
	 	case 1:printf("One");
		case 0:printf("Zero\n");
		case 2:printf("Hello World\n");
	 }



	 for(int i=0; i<=6; i++)
	 {
	 	nums[i]=7+rand() % (54-7+1);
	 	printf("The random numbers is %d\n", nums[i]);

	 }

	 rannum(nums);

return 0;

}//program end

//Function definition
int rannum(int a[])
{
	int smallest;
	for(int i=0; i<=6; i++)
	{
		if(a[i]<smallest)
		{
			smallest=a[i];

		}

	}

	printf("The smallest value is: %d", smallest);

}

void foo(){
	printf("2");
}

void f(){
	printf("1");
	foo();
}
