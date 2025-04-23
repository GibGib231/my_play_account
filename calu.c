#include<stdio.h>
int Amb()
{
	int num1;
	int num2;
	char ope;
// this code is to understand the scanf, math op, if else, and function
//
	printf("enter the first digit: ");
	scanf("%d", &num1);
	printf("enter the opertor: ");
	scanf(" %c", &ope);
	printf("enter the last digi: ");
	scanf("%d", &num2);
// the if statement
// ,
	if(ope == '-'){
		printf("answer is = %d\n", num1 - num2);
	}
	else if (ope == '+'){
		printf("answer is = %d\n", num1 + num2);
	}
		 else if (ope == '/'){
                printf("answer is = %d", num1 / num2);
		printf("\n");
		 }
                
	       	else if (ope == '*'){
                printf("answer is = %d\n", num1 * num2);
		}
	else{
		printf("please enter a value opertor in here\n");
	       //	else if (ope == '+'){
               // printf("%d\n", num1 + num2);
		}
                
}
int main()
{
	Amb();
}
