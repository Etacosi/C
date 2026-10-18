// WAP to Reverse of a number.
#include<stdio.h>
int main()
{
    int a = 0, i = 0;
    int f,z;

    printf("Enter the number: ");
    scanf("%d",&a);
    z = a;

    while( a > 0 ){
    f = a % 10;
    i = (i*10) + f;
    a = a / 10;
    }
 
    printf("The Reversed number is: %d",i);

    return 0;
}