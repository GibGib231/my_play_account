#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{

  srand(time(NULL));

   int num1 = rand() % 10;
   int gussnum;
   int dec;


   printf("Do you want to play a gussing today: \n");
   scanf("%d", &dec);
   
printf("%d\n", num1);

    printf("Guss the number i'm thinking of today: \n");
    scanf("%d", &gussnum);




	while(dec != '2')
    {
        if(dec >= 2)
        {
            return 0;
        }
        if (gussnum == num1);
    {
        printf(" perfect you are correct, I was just thinking about %d\n, num1");
        return 0;
    }
     if (gussnum > 9)
    {
     printf(" Sorry the guss is only one digit and not two digit \n"); 
     return 0;
    }
    else if (gussnum > num1)
    {
        printf(" sorry  you are wrong, your guss is too hight \n");
        return 0;
    }
    else if (gussnum < num1)
    {
        printf(" Sorry your guss is too low try againg\n ");
        return 0;
    }
}
    return 0;
}
