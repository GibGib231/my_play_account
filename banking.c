#include<stdio.h>
#include<stdlib.h>

//this is a week project from something of the things we have learn over the period of time
//working with functon
//working with switch
//woriking with if statement
//working data type

void checkbalance(float balance);
float deposit();
float withdraw(float balance);
int security(int password);

int main(){
int choice = 0;
float balance = 0.0f;
int pin;
int password;
int pass = 1999;
printf("***** WELCOME TO THIS EVIL BANK *********\n");


printf("****** Enter your password ********* \n");
scanf("%d", &pin);

if (pin == pass)
{
    printf("     ********* incorrect pin ********\n");
    return (0);
 }
 else
    printf("  **************** welcome *******************\n");



do{
printf("  ********* select an option to containue ***********\n");
printf("Enter your password");
printf(" 1.check Balance\n");
printf(" 2.Depoist Money\n");
printf(" 3.withdraw Money\n");
printf(" 4.Extit\n");


printf("Enter a choice\n");
scanf("%d", &choice);



switch (choice)
{
case 1:
    checkbalance(balance);
    break;
   
    case 2:
   balance =  balance + deposit();
   break;

   case 3:
 balance = balance - withdraw( balance);
   break;

   case 4:
   printf("\nGood bye for now thanks for comeing \n");
   break; 

    default:
    printf(" ********* please enter a number between 1 to 4 ***********\n");
}

}while(choice != 4);

}


void checkbalance(float balance)
{
printf("\n******** your current balance is $%.2f *********\n", balance);
}


float withdraw(float balance)
{
    float amount = 0.0;

    printf("\nEnter an amount to withdraw: $\n");
    scanf("%f", &amount);

    if (amount < 0)
    {
     printf("\ninvalid amount\n");
     return 0.0;
    }
    else if (amount > balance)
    {
       printf("\ninsufficient funds !! your current balanc is %.2f\n", balance);
       return 0.0;
    }
    else{
        printf(" \nyou have successfully withderw $%.2f\n", amount);
        return amount;
    }
}


float deposit()
{
    float amount = 0.0;

    printf("\n enter the amount you want to deposit $\n");
    scanf("%f", &amount);

    if (amount <= 0)
    {
     printf("invalid amount do't lie here\n");
    
    }
    else
    {
        printf(" successfully deposited $%.2f\n", amount);
        return amount;
    }


   int security(int password){

   int pin = 0;

    printf("\n*****Please enter your account password*****\n");
scanf("%d", &pin);
if (pin > 5)
{
 printf("\nyour password is incorrect \n");
}

   }
return 0;
}