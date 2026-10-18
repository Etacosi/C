// WAP to find largest digit in a number.
#include<stdio.h>
int main()
{
    int a = 0, i = 0;
    int f,z;

    printf("Enter the number: ");
    scanf("%d",&a);
    z = a;

    for( ;a > 0; a = a / 10 ){
    f = a%10;
    if(f >= i)
    i = f;
    }
    printf("The largest digit of number %d is:%d",z,i);

    return 0;
}