// Write a C program to check whether a customer is eligible for a loan based on age and income:
//   • Age must be at least 21.  
//   • If age is valid, check whether income is at least ₹25,000.  
#include<stdio.h>
int main()
{
    int age , income ;

    printf("Enter Your Age: ");
    scanf("%d",&age);
    printf("Your income: ");
    scanf(" %d",&income );

    if ( age >= 21 ){
        if(income >= 25000 )
        printf("You are eligible for loan.");
        else 
        printf("You are not eligible for loan.");
    } else {
        printf("You are not eligible for loan.");
    }
    return 0;
}