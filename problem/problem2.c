// Write a C program to check whether a given number is positive.  
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number: ");
    scanf("%d",&a);
    if( a > 0){
    printf("%d is postive number ",a);
    }
    if( a <= 0){
        printf("%d is non positive number ",a);
    }

    return 0;
}