/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice;
    float balance , amount;
    
    printf("enter current balance: ");
    scanf("%f",&amount);
    
    printf("\n1. balance inquiry");
    printf("\n2. cash withdrawl");
    printf("\n3. cash deposit");

    printf("\n enter your choice: ");
    scanf("%%d",&choice);
    
    switch (choice)
    {
        case 1:
            printf("current balance: %.2f", balance);
            break;
        case 2:
            printf("cash withdrawl amount: ");
            scanf("%f",&amount);  
            
            if(amount <= balance && amount > 0)
            {
                balance = balance - amount;
                printf("transaction successful");
                printf("remaining balance: %.2f",balance);
            }
            else
            {
                printf("insufficient balance");
            }
            break;
        case 3:
            printf("enter deposit amount:");
            scanf("%f",&amount);
            
            if(amount > 0)
            {
                balance = balance + amount;
                printf("deposit successful\n");
                printf("updated balance: %.2f",balance);
            }
            else
            {
                printf("invalid deposit amount");
            }
            break;
            
        default:
            printf("invalid option");
    }
    return 0;
}
