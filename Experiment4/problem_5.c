// WAP to find the product of digits of a number.
#include<stdio.h>
int main()
{
    int a;
    int product = 1;

    printf("Enter a numbers: ");
    scanf("%d",&a );

    // if(a == 0){
    // printf("product of digit is 0");
    // return 0;
    // }

    while( a > 0 ){
    product = product * (a%10);
    a = a / 10;
    }
    printf("product of digits : %d",product);


    return 0;
}