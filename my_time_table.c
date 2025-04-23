#include<stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int count = 0;
    int user;
    //this is to understand the for,  if and += and scanf function

	    printf("please the number of time table you want learn >> ");
    scanf("%d", &user);



    if(user == 2){
    for (num1 = 2; num1 <= 24; num1 += 2)
    
	    if (count <= 12)
		    count++;

    printf("2 x %d = %d\n", count, num1);
}

else if(user == 3){
    for (num1 = 3; num1 <= 36; num1 += 3)
    
            if (count <= 12)
                    count++;

    printf("2 x %d = %d\n", count, num2);
}

else if(user == 2){
    for (num1 = 4; num1 <= 48; num1 += 4)
    
            if (count <= 12)
                    count++;

    printf("2 x %d = %d\n", count, num3);
}

else if(user == 2){
    for (num1 = 5; num1 <= 60; num1 += 5)
    
            if (count <= 12)
                    count++;

    printf("2 x %d = %d\n", count, num4);
}

else if(user == 2){
    for (num1 = 6; num1 <= 72; num1 += 6)
    
            if (count <= 12)
                    count++;

    printf("2 x %d = %d\n", count, num5);
}
else
printf("we do't have that now come later please");

return(0);
}
