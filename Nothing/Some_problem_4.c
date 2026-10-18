// code for print number without its last digit
#include<stdio.h>
int main()
{
    int a = 0 ;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("The number last digit is: %d",a%10);

    return 0;
}