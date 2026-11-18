// WAP using recursion to check whether a number is prime.
#include <stdio.h>
int isprime(int n,int s);
int main()
{
    int n,s = 2;
    printf("Enter the number: ");
    scanf("%d",&n);

    s = isprime(n,s);
    
    if (s){
        printf("%d is a Prime number.",n);
    } else{
        printf("%d is not a Prime number.",n);
    }
    return 0;
}
int isprime(int n,int s)
{
    if(n/2 > s && n % s != 0)
    return 1;
    else{
    return isprime(n,s++);
    }
}