// WAP using recursion to print the first 10 even numbers.
#include <stdio.h>
int evnum(int n);
int main()
{
    int n = 1,s;
    printf("The first 10 even numbers: ");
    s = evnum(n);
    return 0;
}
int evnum(int n)
{
    if(n == 10){
    return printf("%d",2*n);
    }
    else{
        printf("%d ",2*n);
        return evnum  (n+1);
    }
}