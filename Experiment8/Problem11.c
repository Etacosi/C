// WAP using recursion to check whether a number is a palindrome.
#include <stdio.h>
int pali(int ,int );
int main()
{
    int n,s;
    printf("Enter the number: ");
    scanf("%d",&n);

    s = pali(n,0);

    if (n == s){
        printf("%d is a Palindrome numbers.",n);
    } else{
        printf("%d is not a Palindrome numbers.",n);
    }
    return 0;
}
int pali(int n,int s)
{
    if(n == 0){
    return s;
    }
    else{
        return pali(n / 10, s * 10 + ( n %  10));
    }
}