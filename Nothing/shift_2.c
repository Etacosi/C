#include<stdio.h>
int main()
{
    int a = 0 ;
    printf("Enter your number which you want right shift: ");
    scanf("%d",&a);
    printf("The right shifted number is: %d",a>>1);

    return 0;
}