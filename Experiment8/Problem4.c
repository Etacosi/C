// WAP using recursion to print the first 10 odd numbers.
#include <stdio.h>
int oddnum(int n);
int main()
{
    int n = 1,s;
    printf("The first 10 odd numbers: ");
    s = oddnum(n);
    return 0;
}
int oddnum(int n)
{
    if(n > 18){
    return printf("%d",n);
    }
    else{
        printf("%d ",n);
        return oddnum(n+2);
    }
}