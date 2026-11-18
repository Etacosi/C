// WAP to swap two numbers using pointers.
#include <stdio.h>

int main()
{
    int a = 4, b = 5;
    int *ptr1 = &a, *ptr2 = &b;
    int z;

    z = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = z;

    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}