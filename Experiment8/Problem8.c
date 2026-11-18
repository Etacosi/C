// WAP using recursion to find the sum of digits of a given number
#include <stdio.h>
int sumofnum(int n);
int main()
{
    int n,s;
    printf("Enter the number: ");
    scanf("%d",&n);
    s = sumofnum(n);
    printf("Sum of digits of %d is: %d ",n,s);
    return 0;
}
int sumofnum(int n)
{
    if(n == 0)
    return 0;
    else{
    return (n % 10) + sumofnum(n/10);
    }
}