// WAP to find largest digit of a number.
#include<stdio.h>
int main()
{
    int a = 0, i = 0;
    int f,z;

    printf("Enter a numbers: ");
    scanf("%d",&a);
    z = a;

    while( a > 0 ){
    f = a%10;
    a = a / 10;
    if(f >= i)
    i = f;
    }
    printf("The largest digit of number %d is:%d",z,i);

    return 0;
}