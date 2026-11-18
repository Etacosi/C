// WAP to find the square and cube of a given number using pointers.
#include <stdio.h>

int main()
{
    int n,a,b;
    printf("Enter the number: ");
    scanf("%d",&n);

    a = n*n;
    int *ptr1 = &a;
    b = *ptr1*n;
    int *ptr2 = &b;

    printf("Square of %d is: %d.\n",n,*ptr1);
    printf("Cube of %d is: %d.",n,*ptr2);
    return 0;
}