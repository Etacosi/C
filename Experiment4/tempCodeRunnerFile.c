#include<stdio.h>
int main()
{
    int a = 0, i = 0;
    int f,z;

    printf("Enter a numbers: ");
    scanf("%d",&a);
    z = a;

    while( a > 0 ){
    f = a % 10;
    i = (i*10) + f;
    a = a / 10;
    }
    if( z == i)
    printf("%d is a palindrome",z);
    else
    printf("%d is not a palindrome",z);

    return 0;
}