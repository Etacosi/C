// write a program to find smallest number between two number
#include<stdio.h>
int main()
{
    int a = 0, b = 0;

    printf("Enter two numbers: ");
    scanf("%d %d",&a , &b );

    // if (a<b)
    // printf("%d is smallest number",a);
    // else
    // printf("%d is smallest number",b);
    if (a < b)
    printf("%d is biggest number",b);
    else
    printf("%d is biggest number",a);

    return 0;
}