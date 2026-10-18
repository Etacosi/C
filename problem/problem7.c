// Write a C program to check whether a number is positive or negative, 
// and if it is positive, determine whether it is even or odd.  
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter a number ");
    scanf("%d",&a);

if(a > 0 ){
    printf("You entered a positive number\n");
    if( a % 2 == 0)
    printf("%d is even number",a);
    else
    printf("%d is odd number",a);
}else
    printf("%d is a negative number",a);
// if( a = 0){
//     printf(" %d is neither positive nor negative number\n",a);
//     printf("%d is even number",a);
// }

    return 0;
}