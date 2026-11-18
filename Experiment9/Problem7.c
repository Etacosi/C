// WAP to find the factorial of a given number using pointers.
#include <stdio.h>

int main()
{
    int n,a = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    int *ptr = &n;
    printf("Factorial of %d is: ",n);
    for(  ; *ptr > 0; (*ptr)--){
        a = a * *ptr;
        
    }
    printf("%d",a);

}