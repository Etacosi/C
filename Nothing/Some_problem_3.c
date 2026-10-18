// code for remove last digit of a entered number
#include<stdio.h>
int main()
{
    int a = 0 ;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("The number without its last digit is: %d",a/10);

    return 0;
}