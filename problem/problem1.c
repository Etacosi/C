// write a program in C to check a number is odd or even
#include<stdio.h>
int main()
{
    int a = 0;

    printf("Enter a numbers: ");
    scanf("%d ",&a );
    if(a%2 == 0)
    printf("%d is even",a);
    else
    printf("%d is odd",a);

    return 0;
}