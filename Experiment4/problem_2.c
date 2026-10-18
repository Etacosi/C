// WAP to find the sum of digits of a number.
#include<stdio.h>
int main()
{
    int a = 0, sum = 0;

    printf("Enter the number: ");
    scanf("%d",&a );

    while( a > 0 ){
    sum = sum + a%10;
    a = a / 10;
    }
    printf("Sum of digits : %d",sum);

    return 0;
}