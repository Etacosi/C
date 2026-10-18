// WAP to find product of digit of a number.
#include<stdio.h>
int main()
{
    int a;
    int product = 1;

    printf("Enter the number: ");
    scanf("%d",&a );

    for( ; a > 0; a = a / 10 ){
    product = product * (a%10);
    }
    printf("product of digits : %d",product);


    return 0;
}