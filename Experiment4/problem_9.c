// WAP to find sum of first and last digit.
#include<stdio.h>
int main()
{
    int a = 0, i = 0;
    int f,z,s;

    printf("Enter a numbers: ");
    scanf("%d",&a);
    z = a;

    i = a % 10;

    while( a > 0 ){
    f = a%10;
    a = a / 10;
    }
    s = f + i;
    printf("Sum of first and last digit of %d is: %d",z,s);


    return 0;
}