// WAP using recursion to print the first 10 natural numbers.
#include <stdio.h>
int num(int n);
int main()
{
    int n = 1;
    printf("The first 10 natural numbers: ");
    num(n);
    return 0;
}
int num(int n)
{
    if(n == 10){
    return printf("%d",n);
    }
    else{
        printf("%d ",n);
        return num(n+1);
    }
}