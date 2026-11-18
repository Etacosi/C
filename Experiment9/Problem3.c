// WAP to find the sum of two numbers using pointers.
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    int *ptr1 = &a, *ptr2 = &b;

    printf("Sum of two numbers is: %d",(*ptr1 + *ptr2));
    return 0;
}