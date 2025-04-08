#include<stdio.h>
int main(void)
{
int num1 = 20;

if (num1 < 18)
	// this is to understand the if, else if and else condition
		{
		printf("%d that is not Amb Smith age\n", num1);
		}
else if(num1 > 18)
{

	printf("%d is too higher to be Amb Smith age\n", num1);
}
else
{
	printf("%d is the age of the Amb\n", num1);
}

}
