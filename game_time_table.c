#include<stdio.h>
int main()
{

	int user;

	printf("Enter a number less then 6 and not 1 and learn time table today>> ");
		scanf("%d", &user);
	if(user == 2){
	
		for(int g = 1; g <= 12; g++)
			printf("%d x %d = %d\n", 2, g, 2 * g);
	}
	else if(user == 3){

                for(int g = 1; g <= 12; g++)
                        printf("%d x %d = %d\n", 3, g, 3 * g);
        }
	   else if(user == 4){

                for(int g = 1; g <= 12; g++)
                        printf("%d x %d = %d\n", 4, g, 4 * g);
        }   else if(user == 5){

                for(int g = 1; g <= 12; g++)
                        printf("%d x %d = %d\n", 5, g, 5 * g);
        }  else if(user == 6){

                for(int g = 1; g <= 12; g++)
                        printf("%d x %d = %d\n", 6, g, 6 * g);
        }



	else
		printf("we do't have that one in our code base please.\n");
	return(0);
}
