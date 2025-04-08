#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;
//this code will be updated later
//this code is not runing as expected
//there need to be few changes on the code
	printf("%d", n);
	if (last_digit > 5)
	{
	
		printf("%d\n of is more then 5 and not 5", last_digit);
	
	}
	else if (last_digit < 5)
	{
	
		printf("%d\n is less then 5 and not 5", last_digit);
	}
	else if (last_digit == 0)
	{
	
		printf("%d\n is equal to 0 and less then 0", last_digit);
	}
	else
	{
	
		printf("%d\n this is less the 0", last_digit);
	}
	return (0);
}
