// WAP using recursion to find the factorial of a given number.
#include <stdio.h>
int fact(int n);
int main()
{
    int n,s;
    printf("Enter the number: ");
    scanf("%d",&n);
    s = fact(n);
    printf("factorial of %d is: %d ",n,s);
    return 0;
}
int fact(int n)
{
    if(n == 0)
    return 1;
    else{
    return n * fact(n - 1);
    }
}