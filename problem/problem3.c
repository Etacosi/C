// Write a C program to check whether a given number is divisible by 5
#include<stdio.h>
int main()
{
   int a;

   printf("Enter a number ");
   scanf("%d",&a);

   if(a % 5 == 0){
   printf("%d is divisible by 5 ",a);
   }
   if(a % 5 != 0){
   printf("%d is not divisble by 5",a);
   }
    return 0;
}