// Write a C program to display whether a number is positive, negative, or zero.
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number ");
    scanf("%d",&a);

    if(a > 0 )
    printf("Your entered number is positive");
    
    else if(a == 0 )
    printf("Your entered number is zero ");

    else if(a < 0 )
    printf("Your entered number is negative ");


    return 0;
}