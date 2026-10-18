// Write a C program to check whether a given number is greater than 100. 
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number: ");
    scanf("%d",&a);

    if( a > 100 ){
    printf("Your number is greater than 100 ");
    }

    if( a == 100){
    printf("Your number is 100 ");
    }

    if( a < 100){
        printf("Your number is less than 100 ");
    }

    return 0;
} 