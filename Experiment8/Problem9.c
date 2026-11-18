// WAP using recursion to count the number of digits in a given number.
#include <stdio.h>
int count(int n);
int main()
{
    int n,z;
    printf("Enter the number: ");
    scanf("%d",&n);
    z = count(n);
    printf("Number of digits in %d is: %d ",n,z);
    return 0;
}
int count(int n)
{
    if(n == 0){
    return 0;
    }
    else{
        return 1 + count(n/10);
    }
}