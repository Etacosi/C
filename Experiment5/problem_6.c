// WAP to find smallest digit in a number.
#include<stdio.h>
int main()
{
    int a = 0, i = 0;
    int f,z;

    printf("Enter the number: ");
    scanf("%d",&a);
    z = a;
    i = a % 10;

    for( ;a > 0; a = a / 10 ){
    f = a%10;
    if(f <= i)
    i = f;
    }
    printf("The smallest digit of number %d is:%d",z,i);

    return 0;
}