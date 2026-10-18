// Write a C program to check whether a student's marks are greater than or equal to 40.  
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter your marks: ");
    scanf("%d",&a);

    if( a > 40){
    printf("Your marks is greater than 40 ");
    }

    if( a == 40){
    printf("Your marks is 40 ");
    }

    if( a < 40){
        printf("Your marks is less than 40 ");
    }

    return 0;
}