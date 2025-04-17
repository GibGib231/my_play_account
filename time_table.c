#include<stdio.h>
int main(void)
{
// this is a remise of the project from day 2 
// this is not the project please
    int stop = 50;
    printf("these are all the multiple of 50 by 3 between 1 to %d:\n", stop);
    for (int i = 3; i <= stop; i + 3)
    // we made use of the += that is call compound addition operator
    {

        printf(" %d\n", i); 
    }
    return("0");
    
}
