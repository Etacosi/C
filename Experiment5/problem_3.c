// WAP to find the factorial of a number.
#include<stdio.h>
int main()
{
    int a, i;
    int f = 1;

    printf("Enter the number: ");
    scanf("%d",&a );

    for(i = 1 ;i <= a;i++ ){
        f = f * i;
    }
    printf("Factorial of %d is %d",a,f);

    return 0;
}