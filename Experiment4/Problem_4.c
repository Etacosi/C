// WAP to find the factorial of a number.
#include<stdio.h>
int main()
{
    int a;
    int i = 1,f = 1;

    printf("Enter the number: ");
    scanf("%d",&a );

    while( i <= a ){
        f = f * i;
        i++;
    }
    printf("Factorial of %d is %d",a,f);

    return 0;
}