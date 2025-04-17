#include<stdio.h>

//int amb(int a)

//	 return (a + 5);
int main()

{

//	printf("%d\n", a);
	int age;
//	char name[30];

//	printf("enter your full name \n >>");
//		scanf("%s", &name);

	printf("enter age\n >> ");
	scanf("%d", &age)

	if (age >= 18)

	printf("you are %d years old this year and can vote now\n", age);

	else
		printf("you can not vote yet please up yet");
	return(0);
}
