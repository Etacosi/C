// Write a C program to check whether a person is eligible to vote based on:
//   • Age must be 18 or above. 
//  • The person must be a citizen.
#include<stdio.h>
int main()
{
    int age ;
    char citizenship;

    printf("You have citizenship? (y/n): ");
    scanf(" %c",&citizenship );
    printf("Enter Your Age: ");
    scanf("%d",&age);

    if ( citizenship == 'y'){
        if(age >= 18 )
        printf("You are eligible for vote");
        else 
        printf("You are not eligible for vote ");
    } else {
        printf("You are not eligible for vote ");
    }
    return 0;
}