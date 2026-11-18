// WAP using recursion to print the Fibonacci series up to n terms.
#include <stdio.h>
int s,a = 0,b = 1;
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Fibonacci series up to %d terms is: ",n);
    fibonacci(n);
    return 0;
}
int fibonacci(int n)
{
    if(n == 1)
    return printf("%d",a);
    else{
        printf("%d ",a);
        s = a + b;
        a = b;
        b = s;
    return fibonacci( n - 1 );
    }
    
    }