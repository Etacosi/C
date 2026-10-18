// WAP to check whether a number is a palindrome or not.
#include<stdio.h>
int main()
{
    int a = 0, i = 0;
    int f,z;

    printf("Enter the number: ");
    scanf("%d",&a);
    z = a;

    for( ; a > 0; a = a / 10 ){
    f = a % 10;
    i = (i*10) + f;
    }
    if( z == i)
    printf("%d is a palindrome",z);
    else
    printf("%d is not a palindrome",z);

    return 0;
}