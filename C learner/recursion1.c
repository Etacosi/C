// WAP to find factorial of a number using recursion.
#include <stdio.h>
int factorial(int n);
int main()
{
    int n,s;
    printf("Enter the number: ");
    scanf("%d",&n);
    s = factorial(n);
    printf("factorial of %d is: %d ",n,s);
    return 0;
}
int factorial(int n)
{
    if(n == 0)
    return 1;
    else{
    return n * factorial(n - 1);
    }
}
