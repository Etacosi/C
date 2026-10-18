// Write a C program to find the largest among three numbers using an else-if ladder.
#include<stdio.h>
int main()
{
    int a = 0, b = 0, c = 0 ;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a , &b , &c );

    if(b > a && b > c)
    printf("%d is largest number",b);
    else if(a > c && a > b)
    printf("%d is largest number",a);
    else 
    printf("%d is largest number",c);

    return 0;
}