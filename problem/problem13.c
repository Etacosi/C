// Write a C program to check whether a given year is a leap year or not. 
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a year: ");
    scanf("%d",&a);

    if(a % 400 == 0 || a % 4 == 0 && a % 100 != 0 )
    printf("The year you entered is leap year ");
    
    else 
    printf("The year you entered is not a leap year ");

    return 0;
}