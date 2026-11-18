// WAP using recursion to print the first 10 natural numbers in reverse order.
#include <stdio.h>
int num(int n);
int main()
{
    int n = 10,s;
    printf("The first 10 natural numbers in reverse order is: ");
    s = num(n);
    return 0;
}
int num(int n)
{
    if(n == 1){
    return printf("%d",n);
    }
    else{
        printf("%d ",n);
        return num(n-1);
    }
}