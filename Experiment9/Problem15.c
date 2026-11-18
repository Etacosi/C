// WAP to print the multiplication table of a given number using pointers.
#include <stdio.h>
int main()
{
    int a,b,s,i = 1;
    printf("Enter the number: ");
    scanf("%d",&a);
    int *ptr = &a;
    printf("Multiplication table of %d is: ",a);
    for( ;i <= 10;i++){
        s = (*ptr) * i;
        printf("%d ",s);
    }
}