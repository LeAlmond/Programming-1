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
	srand(time(0));
	//declaration and initialization
	 int nums[7]={0};

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
