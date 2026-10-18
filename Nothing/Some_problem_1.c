#include<stdio.h>
int main()
{
    int a = 0 , z = 0 ;
    printf("Enter your number: ");
    scanf("%d",&a);
    z = a*(a+1)/2 ;

    printf("Sum of first N number is %d",z);
  

    return 0;
}