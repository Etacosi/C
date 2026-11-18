// WAP using recursion to find the square of a given number.
#include <stdio.h>
int square(int n);
int main()
{
    int n,z;
    printf("Enter the number: ");
    scanf("%d",&n);
    z = square(n);
    printf("square of %d is: %d ",n,z);
    return 0;
}
int square(int n)
{
    if( n == 0){
    return 0;
    }
    else{
        return square(n - 1) + (2 * n - 1);     //n^2 = (n - 1)^2 + 2n - 1
    }
}   
